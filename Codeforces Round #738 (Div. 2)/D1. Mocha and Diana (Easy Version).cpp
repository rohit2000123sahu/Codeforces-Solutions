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

ll parent1[1001];
ll tsize1[1001];

ll parent2[1001];
ll tsize2[1001];

ll find1(ll x)
{
    if (x == parent1[x])
    {
        return x;
    }
    parent1[x] = find1(parent1[x]);
    return parent1[x];
}

bool same1(ll a, ll b)
{
    a = find1(a);
    b = find1(b);
    return a == b;
}

void unite1(ll a, ll b)
{
    a = find1(a);
    b = find1(b);
    if (tsize1[a] < tsize1[b])
    {
        swap(a, b);
    }

    tsize1[a] += tsize1[b];
    parent1[b] = a;
}

ll find2(ll x)
{
    if (x == parent2[x])
    {
        return x;
    }
    parent2[x] = find2(parent2[x]);
    return parent2[x];
}

bool same2(ll a, ll b)
{
    a = find2(a);
    b = find2(b);
    return a == b;
}

void unite2(ll a, ll b)
{
    a = find2(a);
    b = find2(b);
    if (tsize2[a] < tsize2[b])
    {
        swap(a, b);
    }

    tsize2[a] += tsize2[b];
    parent2[b] = a;
}

// This is the basic question of dsu.
// So before moving to the solution please go through the dsu once.

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m1, m2;
    cin >> n >> m1 >> m2;

    ll i;

    for (i = 1; i <= n; i++)
    {
        parent1[i] = i;
        tsize1[i] = i;
    }

    for (i = 0; i < m1; i++)
    {
        ll a, b;
        cin >> a >> b;

        if (!same1(a, b))
        {
            unite1(a, b);
        }
    }

    for (i = 1; i <= n; i++)
    {
        parent2[i] = i;
        tsize2[i] = i;
    }

    for (i = 0; i < m2; i++)
    {
        ll a, b;
        cin >> a >> b;

        if (!same2(a, b))
        {
            unite2(a, b);
        }
    }

    vector<pl> vect;

    for (i = 1; i <= n; i++)
    {
        for (ll j = i + 1; j <= n; j++)
        {
            if (!same1(i, j) && !same2(i, j))
            {
                vect.pb(mp(i, j));
                unite1(i, j);
                unite2(i, j);
            }
        }
    }

    cout << vect.size() << endl;

    for (auto c : vect)
    {
        cout << c.F << " " << c.S << endl;
    }

    return 0;
}
