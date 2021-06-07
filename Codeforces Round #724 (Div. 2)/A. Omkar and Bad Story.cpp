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

ll gcd(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a % b);
}

ll calc(ll a[], ll n)
{
    ll temp = 0;
    for (ll i = 0; i < n; i++)
    {
        temp = gcd(temp, a[i]);
    }
    return temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;
  
    // Just we need to find the gcd and all the numbers should be multiple of that

    while (T--)
    {
        ll n;
        cin >> n;

        ll i;
        ll a[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        if (a[0] < 0)
        {
            cout << "NO" << endl;
            continue;
        }

        ll diff = calc(a, n);

        ll count = 0;
        vl vect;

        ll start = min(a[0], diff);

        while (start <= a[n - 1])
        {
            vect.pb(start);
            start += diff;
        }

        if (vect.size() > 300)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            cout << vect.size() << endl;
            for (auto c : vect)
            {
                cout << c << " ";
            }
            cout << endl;
        }
    }
}
