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
        string s;
        cin >> s;

        ll i;
        ll n = s.size();

        ll ans = 0;
        bool zero = false;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '0')
            {
                zero = true;
            }
        }

        if (zero)
        {
            ans = 1;
            ll count = 0;
            bool flag = true;
            for (i = 0; i < n; i++)
            {
                if (s[i] == '0' && flag)
                {
                    count++;
                    flag = false;
                }
                else if (s[i] == '1')
                {
                    flag = true;
                }
            }

            if (count > 1)
            {
                ans = 2;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
