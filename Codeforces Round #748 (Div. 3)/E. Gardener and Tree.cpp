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
        ll n, k;
        cin >> n >> k;

        vl adj[n + 1];
        ll indegree[n + 1] = {0};

        ll i;
        for (i = 0; i < n - 1; i++)
        {
            ll a, b;
            cin >> a >> b;
            adj[a].pb(b);
            adj[b].pb(a);
            indegree[a]++;
            indegree[b]++;
        }

        queue<ll> q;
        ll size = 0;

        for (i = 1; i <= n; i++)
        {
            if (indegree[i] <= 1)
            {
                q.push(i);
                size++;
            }
        }

        ll ans = n;

        for (i = 0; i < k; i++)
        {
            ll j;
            ll temp = 0;

            for (j = 0; j < size; j++)
            {
                ll curr = q.front();
                q.pop();

                ans--;

                indegree[curr]--;

                for (auto c : adj[curr])
                {
                    if (indegree[c] > 0)
                    {
                        indegree[c]--;
                        if (indegree[c] == 1)
                        {
                            q.push(c);
                            temp++;
                        }
                    }
                }
            }
            size = temp;
        }

        cout << ans << endl;
    }

    return 0;
}
