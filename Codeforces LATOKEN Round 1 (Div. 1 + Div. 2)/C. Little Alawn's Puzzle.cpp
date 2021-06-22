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

void dfs(ll i, bool visited[], vector<ll> adj[])
{
    visited[i] = true;
    for (auto c : adj[i])
    {
        if (!visited[c])
        {
            dfs(c, visited, adj);
        }
    }
}

ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll temp = power(a, b / 2);
    if (b % 2 != 0)
    {
        return (((temp * temp) % MOD) * a) % MOD;
    }
    else
    {
        return (temp * temp) % MOD;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    while (T--)
    {
        ll n;
        cin >> n;

        ll i;
        ll a[n], b[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vector<ll> adj[n + 1];

        for (i = 0; i < n; i++)
        {
            adj[a[i]].pb(b[i]);
            adj[b[i]].pb(a[i]);
        }

        // Find the number of cycles

        bool visited[n + 1];
        memset(visited, false, sizeof(visited));
        ll count = 0;

        for (i = 1; i <= n; i++)
        {
            if (!visited[i])
            {
                dfs(i, visited, adj);
                count++;
            }
        }

        ll ans = power(2, count);
        cout << ans << endl;
    }

    return 0;
}
