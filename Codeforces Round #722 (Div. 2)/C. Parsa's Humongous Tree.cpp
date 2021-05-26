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

vector<ll> adj[100005];
ll dp[100005][2];

void solve(ll u, bool visited[], vector<vector<ll>> &vect)
{
    visited[u] = true;
    for (auto v : adj[u])
    {
        if (!visited[v])
        {
            solve(v, visited, vect);
            dp[u][0] += max(abs(vect[u][0] - vect[v][0]) + dp[v][0], abs(vect[u][0] - vect[v][1]) + dp[v][1]);
            dp[u][1] += max(abs(vect[u][1] - vect[v][0]) + dp[v][0], abs(vect[u][1] - vect[v][1]) + dp[v][1]);
        }
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

        vector<vector<ll>> vect;
        vect.pb({0, 0});

        for (i = 1; i <= n; i++)
        {
            ll l, r;
            cin >> l >> r;
            vect.pb({l, r});
            adj[i].clear();
            dp[i][0] = 0;
            dp[i][1] = 0;
        }

        for (i = 1; i < n; i++)
        {
            ll u, v;
            cin >> u >> v;
            adj[u].pb(v);
            adj[v].pb(u);
        }

        bool visited[n + 1];

        memset(visited, false, sizeof(visited));

        dp[1][0] = dp[1][1] = 0;

        solve(1, visited, vect);

        cout << max(dp[1][0], dp[1][1]) << endl;
    }

    return 0;
}
