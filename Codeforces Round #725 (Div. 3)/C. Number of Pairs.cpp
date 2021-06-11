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
        ll n, l, r;
        cin >> n >> l >> r;

        ll i;
        vl vect;

        for (i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            vect.pb(temp);
        }

        sort(all(vect));

        ll ans = 0;

        for (i = 0; i < n; i++)
        {
            ans += upper_bound(vect.begin(), vect.end(), r - vect[i]) - vect.begin();
            ans -= lower_bound(vect.begin(), vect.end(), l - vect[i]) - vect.begin();

            if (l <= 2 * vect[i] && 2 * vect[i] <= r)
            {
                ans--;
            }
        }
      
        cout << ans / 2 << endl;
    }

    return 0;
}
