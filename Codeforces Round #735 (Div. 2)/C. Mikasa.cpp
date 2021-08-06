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

    ll T;
    cin >> T;

    while (T--)
    {
        ll n, m;
        cin >> n >> m;

        if (n > m)
        {
            cout << 0 << endl;
        }
        else
        {
            ll i;
            ll num[32] = {0};
            ll index = 31;
            for (i = 31; i >= 0; i--)
            {
                if (1 & (m >> i))
                {
                    if (1 & (n >> i))
                    {
                        num[i] = 0;
                    }
                    else
                    {
                        num[i] = 1;
                    }
                }
                else
                {
                    if (1 & (n >> i))
                    {
                        num[i] = 0;
                        break;
                    }
                    else
                    {
                        num[i] = 0;
                        index = i;
                    }
                }
            }

            // cout << index << endl;

            ll ans = 0;
            if (i == -1)
            {
                num[index] = 1;
                i = index - 1;
                while (i >= 0)
                {
                    num[i] = 0;
                    i--;
                }
            }
            ll mul = 1;
            for (i = 0; i <= 31; i++)
            {
                ans += num[i] * mul;
                mul = mul * 2;
            }

            cout << ans << endl;
        }
    }

    return 0;
}
