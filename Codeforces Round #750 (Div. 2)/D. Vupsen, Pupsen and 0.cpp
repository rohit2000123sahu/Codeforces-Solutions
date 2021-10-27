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
        ll i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        ll b[n];

        if (n % 2 == 0)
        {
            for (i = 0; i < n; i = i + 2)
            {
                cout << a[i + 1] << " " << -1 * a[i] << " ";
            }
        }
        else
        {
            if (a[0] + a[1] != 0)
            {
                cout << -1 * a[2] << " " << -1 * a[2] << " " << a[0] + a[1] << " ";
            }
            else if (a[1] + a[2] != 0)
            {
                cout << a[2] + a[1] << " " << -1 * a[0] << " " << -1 * a[0] << " ";
            }
            else if (a[0] + a[2] != 0)
            {
                cout << -1 * a[1] << " " << a[0] + a[2] << " " << -1 * a[1] << " ";
            }
            for (i = 3; i < n; i = i + 2)
            {
                cout << a[i + 1] << " " << -1 * a[i] << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
