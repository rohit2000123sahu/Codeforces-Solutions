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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll i;
        for (i = 0; i < n; i++)
        {
            if (s[i] != '1')
            {
                break;
            }
        }
      
        // Just two cases

        if (i == n)     // If all 1 then output two same numbers based on length constraints
        {
            cout << 1 << " " << n - 1 << " " << 2 << " " << n << endl;
        }
        else      // Else we will check the position of zero and based on that we will print our answer. Main thing is here we will took k=2 so that two numbers will differ only by 0
        {
            if (i >= n / 2)       // 
            {
                cout << 1 << " " << i + 1 << " " << 1 << " " << i << endl;
            }
            else
            {
                cout << i + 2 << " " << n << " " << i + 1 << " " << n << endl;
            }
        }
    }

    return 0;
}
