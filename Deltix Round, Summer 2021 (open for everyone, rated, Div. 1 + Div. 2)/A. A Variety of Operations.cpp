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
        ll a, b;
        cin >> a >> b;

        if (a == b && a == 0)
        {
            cout << 0 << endl;
        }
        else if (a == b)
        {
            cout << 1 << endl;
        }
        else
        {
            ll temp = abs(a - b);     // If diff is even then we could select first a value of k so that we got mid value and then we could choose another value of k which is diff/2 to get answer
            if (temp % 2 == 0)
            {
                cout << 2 << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
