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

ll dist(pl a, pl b)
{
    return abs(a.F - b.F) + abs(a.S - b.S);
}

ll get_min(pl a, pl b, pl org)
{
    ll ans = 0;
    ans += min(2 * (dist(a, org) + dist(b, org)), dist(a, org) + dist(a, b) + dist(b, org));
    return ans;
}

// Just brute force

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

        ll x, y;
        cin >> x >> y;

        vector<pair<ll, pair<ll, ll>>> vect;

        sort(all(vect));

        vector<pl> possible;

        possible.pb({1, 1});
        possible.pb({1, m});
        possible.pb({n, m});
        possible.pb({n, 1});

        ll ans = 0;
        ll f, s;

        for (ll i = 0; i < 4; i++)
        {
            for (ll j = 0; j < 4; j++)
            {
                if (i != j)
                {
                    ll temp = get_min(possible[i], possible[j], {x, y});
                    if (temp >= ans)
                    {
                        f = i;
                        s = j;
                        ans = temp;
                    }
                }
            }
        }

        cout << possible[f].F << " " << possible[f].S << " " << possible[s].F << " " << possible[s].S << endl;
    }

    return 0;
}
