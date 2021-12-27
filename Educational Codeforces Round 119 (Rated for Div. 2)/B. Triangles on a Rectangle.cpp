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
        ll w, h;
        cin >> w >> h;

        ll ans = 0;

        for (ll tt = 0; tt < 2; tt++)
        {
            ll k;
            cin >> k;
            ll first;
            cin >> first;
            for (ll i = 1; i < k - 1; i++)
            {
                ll temp;
                cin >> temp;
            }
            ll last;
            cin >> last;

            ans = max(ans, (last - first) * h);
        }

        for (ll tt = 0; tt < 2; tt++)
        {
            ll k;
            cin >> k;
            ll first;
            cin >> first;
            for (ll i = 1; i < k - 1; i++)
            {
                ll temp;
                cin >> temp;
            }
            ll last;
            cin >> last;

            ans = max(ans, (last - first) * w);
        }

        cout << ans << endl;
    }

    return 0;
}
