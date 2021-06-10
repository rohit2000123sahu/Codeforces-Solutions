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

// Just brute force try all the three different possiblity

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    while (T--)
    {
        ll n, i;
        cin >> n;

        ll a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll mini = *min_element(a, a + n);
        ll maxi = *max_element(a, a + n);

        ll minIndex = -1;
        ll maxIndex = -1;

        for (i = 0; i < n; i++)
        {
            if (a[i] == mini)
            {
                minIndex = i + 1;
            }

            if (a[i] == maxi)
            {
                maxIndex = i + 1;
            }
        }

        ll ans = max(maxIndex, minIndex);
        ans = min(ans, max(n - maxIndex, n - minIndex) + 1);
        if (minIndex > maxIndex)
        {
            swap(minIndex, maxIndex);
        }

        ans = min(ans, minIndex + n + 1 - maxIndex);

        cout << ans << endl;
    }

    return 0;
}
