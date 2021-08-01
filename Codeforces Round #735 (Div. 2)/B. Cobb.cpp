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
        ll n, k;
        cin >> n >> k;

        ll a[n + 1];
        ll i, j;

        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        ll ans = -1e13;
        for (i = max((ll)1, n - 2 * k); i <= n; i++)
        {
            for (j = i + 1; j <= n; j++)
            {
                ans = max(ans, i * j - k * (a[i] | a[j]));
            }
        }

        cout << ans << endl;
    }

    return 0;
}
