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

ll fact[200005];

ll nC2(ll a)
{
    ll ans = a;
    ans = ans * (a - 1);

    ans %= MOD;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    fact[0] = 1;

    for (ll i = 1; i <= 200005; i++)
    {
        fact[i] = i * fact[i - 1];
        fact[i] %= MOD;
    }

    while (T--)
    {
        ll n;
        cin >> n;

        ll a[n];
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll mini = 1e12;

        for (i = 0; i < n; i++)
        {
            mini = min(mini, a[i]);
        }

        ll count = 0;
        bool flag = false;
        for (i = 0; i < n; i++)
        {
            if (a[i] == mini)
            {
                count++;
            }
            if ((mini & a[i]) != mini)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << 0 << endl;
            continue;
        }

        ll ans = (((nC2(count) % MOD) * fact[n - 2]) % MOD);

        cout << ans << endl;
    }

    return 0;
}
