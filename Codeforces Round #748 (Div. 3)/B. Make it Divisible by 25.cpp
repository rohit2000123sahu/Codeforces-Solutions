#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
typedef unordered_map<ll, ll> uml;
typedef vector<pl> vpl;
typedef map<ll, ll> ml;

ll calc(string s, ll a, ll b)     // Function to calculate the minimum number of moves required when we want the last digits as "ab". We will pass "ab" as per our need so that it is divisible by 25 
{
    ll n = s.size();
    ll i;
    ll ans = 0;
    ll index = -1;

    for (i = n - 1; i >= 0; i--)    // First digit
    {
        if (s[i] - '0' == b)
        {
            index = i;
            break;
        }
        else
        {
            ans++;
        }
    }

    for (i = index - 1; i >= 0; i--)  
    {
        if (s[i] - '0' == a)    // If we find second digit then return ans
        {
            return ans;
        }
        else
        {
            ans++;
        }
    }

    return 100;           // Any number greater than 18 as it will be our answer in the worst case
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        ll ans = 100;

        // The number will be divisible by 25 if and only if its last digits are 25 or 50 or 75 or 00
        ans = min(ans, calc(s, 2, 5));    
        ans = min(ans, calc(s, 5, 0));
        ans = min(ans, calc(s, 7, 5));
        ans = min(ans, calc(s, 0, 0));

        cout << ans << endl;
    }

    return 0;
}
