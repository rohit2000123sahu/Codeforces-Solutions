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

const ll N = 2e5 + 10;

ll n, m, deg[N], ans;

void add(ll u, ll v)
{
    if (u > v)
        swap(u, v);
    ans -= deg[u] == 0;
    deg[u]++;
}
void del(ll u, ll v)
{
    if (u > v)
        swap(u, v);
    deg[u]--;
    ans += deg[u] == 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll i;
    cin >> n >> m;
    ans = n;

    for (i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        add(u, v);
    }

    ll q;
    cin >> q;

    while (q--)
    {
        ll u, v, query;
        cin >> query;

        if (query == 1)
        {
            cin >> u >> v;
            add(u, v);
        }
        else if (query == 2)
        {
            cin >> u >> v;
            del(u, v);
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}
