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
    // Just mathematics
    while (t--)
    {
        ll x, n;
        cin >> x >> n;

        if (x % 2 == 0)
        {
            if (n % 4 == 0)
            {
                cout << x << endl;
            }
            else if (n % 4 == 1)
            {
                cout << x - n << endl;
            }
            else if (n % 4 == 2)
            {
                cout << x + 1 << endl;
            }
            else
            {
                cout << x + n + 1 << endl;
            }
        }
        else
        {
            if (n % 4 == 0)
            {
                cout << x << endl;
            }
            else if (n % 4 == 1)
            {
                cout << n + x << endl;
            }
            else if (n % 4 == 2)
            {
                cout << x - 1 << endl;
            }
            else
            {
                cout << x - n - 1 << endl;
            }
        }
    }

    return 0;
}
