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
        ll n, l, r, k;
        cin >> n >> l >> r >> k;

        ll i, a[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);
        ll ans = 0;

        // We will just select all the values starting from l upto r in increasing order till we have sufficient amount 
        for (i = 0; i < n; i++)
        {
            if (a[i] >= l && a[i] <= r && k >= a[i])
            {
                ans++;
                k = k - a[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
