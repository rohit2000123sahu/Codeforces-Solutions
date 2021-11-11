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

ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll temp = power(a, b / 2);
    ll ans = temp * temp;
    ans = ans % MOD;
    if (b % 2 == 0)
    {
        return ans;
    }
    else
    {
        ans = ans * a;
        ans = ans % MOD;
        return ans;
    }
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
        ll n, k;
        cin >> n >> k;

        ll a[n], i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (a[0] != 0)
        {
            cout << 1 << endl;
            continue;
        }

        ll avail = k;
        ll req = 0;
        ll ans = 0;
        i = 0;
        while (avail >= 0)
        {
            if (req == 9 || req == a[n - 1])
            {
                ans += (avail + 1) * power(10, req);
                break;
            }
            else if (a[i] == req)
            {
                if (avail >= 9)
                {
                    avail = avail - 9;
                    ans += 9 * power(10, req);
                }
                else
                {
                    ans += (avail + 1) * power(10, req);
                    break;
                }
                i++;
            }
            else
            {
                ll temp = 0;
                temp = 9 * power(10, req - a[i - 1]);
                if (avail >= temp)
                {
                    avail = avail - temp;
                    ans += 9 * power(10, req);
                }
                else
                {
                    ans += (avail + 1) * power(10, a[i - 1]);
                    break;
                }
            }
            req++;
        }

        cout << ans << endl;
    }

    return 0;
}
