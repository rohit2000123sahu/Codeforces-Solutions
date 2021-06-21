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

        ll a[n];
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        if (n == 1)
        {
            cout << a[0] << endl;
            continue;
        }

        ll prev = -1;

        ll ans = 0;

        for (i = 0; i < n; i++)
        {
            if (i == 0)
            {
                if (a[i + 1] < a[i])
                {
                    ans = a[i] - a[i + 1];
                    a[i] = a[i + 1];
                }
            }
            else if (i == n - 1)
            {
                if (a[n - 1] > a[n - 2])
                {
                    ans += a[n - 1] - a[n - 2];
                    a[n - 1] = a[n - 2];
                }
            }
            else
            {
                if (a[i] > a[i - 1] && a[i] > a[i + 1])
                {
                    ll temp = max(a[i + 1], a[i - 1]);
                    ans += a[i] - temp;
                    a[i] = temp;
                }
            }
        }

        ans += a[0];

        for (i = 1; i < n; i++)
        {
            ans += abs(a[i] - a[i - 1]);
        }

        ans += a[n - 1];

        cout << ans << endl;
    }

    return 0;
}
