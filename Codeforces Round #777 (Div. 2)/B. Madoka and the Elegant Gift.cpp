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

void solve(ll n, ll m)
{
    ll a[n][m] = {0};
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        for (ll j = 0; j < m; j++)
        {
            a[i][j] = s[j] - '0';
        }
    }

    // for (ll i = 0; i < n; i++)
    // {
    //     for (ll j = 0; j < m; j++)
    //     {
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = 0; j < m - 1; j++)
        {
            ll total = a[i][j] + a[i + 1][j] + a[i][j + 1] + a[i + 1][j + 1];
            if (total == 3)
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    cout << "YES" << endl;
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        solve(n, m);
    }

    return 0;
}
