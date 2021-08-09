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
        ll a, b;
        cin >> a >> b;

        if (a == b)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            ll temp = __gcd(a, b);
            if (temp <= abs(a - b))
            {
                ll minimum = min(a, b);
                if (a % abs(a - b) == b % abs(a - b))
                {
                    minimum = min(minimum, a % abs(a - b));
                    minimum = min(minimum, abs(a - b) - a % (abs(a - b)));
                }
                cout << abs(a - b) << " " << minimum << endl;
            }
            else
            {
                cout << temp << " " << 0 << endl;
            }
        }
    }

    return 0;
}
