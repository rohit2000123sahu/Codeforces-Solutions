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

ll calc(ll a, ll b)
{
    ll mul = a * b;
    ll gcd = __gcd(a, b);
    return mul / gcd;
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
        ll n;
        cin >> n;

        ll a[n + 1];
        ll i;

        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        ll lcm = 1;

        for (i = 1; i <= n; i++)
        {
            lcm = calc(lcm, i + 1);
            if (a[i] % lcm == 0)
            {
                break;
            }
        }

        if (i == n + 1)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
