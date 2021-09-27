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
        ll n;
        cin >> n;

        ll a[n];
        ll b[n];
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        vpl vect;
        for (i = 0; i < n; i++)
        {
            vect.pb({a[i], i});
        }

        sort(all(vect));

        ll minimum_odd[n];

        minimum_odd[0] = vect[0].second;

        for (i = 1; i < n; i++)
        {
            minimum_odd[i] = min(minimum_odd[i - 1], vect[i].second);
        }

        ll ans = 1e9;

        for (i = 0; i < n; i++)
        {
            ans = min(ans, i + minimum_odd[b[i] / 2 - 1]);
        }

        cout << ans << endl;
    }

    return 0;
}
