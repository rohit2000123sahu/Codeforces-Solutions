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

        if (n == 1)         // Corner Case
        {
            cout << s << s << endl;
        }
        else if (s[0] == s[1])     // Universal Solution
        {
            cout << s[0] << s[0] << endl;
        }
        else        // Now we will go for finding the index until the previous character is not smaller then the next one
        {
            ll i;
            ll index = n - 1;
            for (i = 0; i < n - 1; i++)
            {
                if (s[i] < s[i + 1])
                {
                    index = i;
                    break;
                }
            }

            for (i = 0; i <= index; i++)    // Printing our answer
            {
                cout << s[i];
            }
            for (i = index; i >= 0; i--)
            {
                cout << s[i];
            }
            cout << endl;
        }
    }

    return 0;
}
