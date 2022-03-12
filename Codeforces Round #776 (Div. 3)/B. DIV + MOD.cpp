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
        ll l, r, a;
        cin >> l >> r >> a;

        ll ans = l / a + l % a;         
        ans = max(ans, r / a + r % a);          // Answer from the base case

        ll m = r / a * a - 1;               

        if (m >= l)
        {
            ans = max(ans, m / a + m % a);
        }

        cout << ans << endl;
    }

    return 0;
}
