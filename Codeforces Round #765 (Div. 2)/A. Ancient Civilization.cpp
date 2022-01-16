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
        ll n, l;
        cin >> n >> l;

        vector<ll> x(n);
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        ll ans[31] = {0};

        for (i = 0; i <= 30; i++)
        {
            ll count_zero = 0;
            ll count_one = 0;
            for (ll j = 0; j < n; j++)
            {
                if (x[j] & 1)
                {
                    count_one++;
                }
                else
                {
                    count_zero++;
                }
                x[j] = x[j] >> 1;
            }
            if (count_zero >= count_one)
            {
                ans[i] = 0;
            }
            else
            {
                ans[i] = 1;
            }
        }

        ll y = 0;
        ll num = 1;
        for (i = 0; i <= 30; i++)
        {
            y += num * ans[i];
            num = num * 2;
        }

        cout << y << endl;
    }

    return 0;
}
