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
#define MOD 998244353
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
typedef unordered_map<ll, ll> uml;
typedef vector<pl> vpl;
typedef map<ll, ll> ml;

ll fact[200006];

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

    fact[0] = 1;
    for (ll i = 1; i <= 200005; i++)
    {
        fact[i] = i * fact[i - 1];
        fact[i] %= MOD;
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll a[n];
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n, greater<ll>());

        bool possible = true;

        if (a[0] - a[1] > 1)
        {
            cout << 0 << endl;
            continue;
        }

        if (a[0] == a[1])
        {
            cout << fact[n] << endl;
            continue;
        }

        i = 0;
        while (i < n && a[0] == a[i])
        {
            i++;
        }

        ll start = i;

        while (i < n && a[0] - 1 == a[i])
        {
            i++;
        }

        ll k = i - start;

        ll total_ways = fact[n];

        ll not_possible = fact[n] / (k + 1);

        // cout << total_ways - not_possible << endl;

        int ans = 1, sub = 1;
        for (long long i = 1; i <= n; ++i)
        {
            ans = ans * i % MOD;
            if (i != k + 1)
                sub = sub * i % MOD;
        }
        ans = (ans - sub + MOD) % MOD;
        cout << ans << '\n';
    }

    return 0;
}
