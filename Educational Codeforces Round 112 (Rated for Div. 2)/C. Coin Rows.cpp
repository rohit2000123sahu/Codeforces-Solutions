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
        ll n;
        cin >> n;

        ll a[2][n];

        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> a[0][i];
        }

        for (i = 0; i < n; i++)
        {
            cin >> a[1][i];
        }

        ll prefix_second[n];
        prefix_second[0] = a[1][0];

        for (i = 1; i < n; i++)
        {
            prefix_second[i] = prefix_second[i - 1] + a[1][i];
        }

        ll suffix_first[n];
        suffix_first[n - 1] = a[0][n - 1];
        for (i = n - 2; i >= 0; i--)
        {
            suffix_first[i] = a[0][i] + suffix_first[i + 1];
        }

        ll ans = 1e9;

        for (i = 0; i < n; i++)
        {
            ll temp = 0;
            if (i + 1 < n)
            {
                temp = max(temp, suffix_first[i + 1]);
            }

            if (i - 1 >= 0)
            {
                temp = max(temp, prefix_second[i - 1]);
            }

            if (temp != 0)
            {
                ans = min(ans, temp);
            }
        }

        if (ans != 1e9)
        {
            cout << ans << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
