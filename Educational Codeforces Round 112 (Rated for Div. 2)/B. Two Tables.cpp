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

    ll T;
    cin >> T;

    while (T--)
    {
        ll W, H;
        cin >> W >> H;

        ll x1, x2, y1, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        ll w, h;
        cin >> w >> h;

        ll wi = x2 - x1;
        ll hi = y2 - y1;

        ll ans = 1e12;

        if (w + wi <= W)
        {
            ans = min(ans, max((ll)0, w - x1));       // Putting it in left
            ans = min(ans, max((ll)0, x2 - (W - w))); // Putting it to right
        }
        if (h + hi <= H)
        {
            ans = min(ans, max((ll)0, h - y1));
            ans = min(ans, max((ll)0, y2 - (H - h)));
        }

        if (ans == 1e12)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}
