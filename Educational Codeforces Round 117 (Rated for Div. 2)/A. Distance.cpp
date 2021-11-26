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
        ll x, y;
        cin >> x >> y;
        if ((x + y) % 2 == 0) // If sum is not even then anwer is -1
        {
            if (x % 2 == 0 && y % 2 == 0)   // if both x and y are even
            {
                cout << x / 2 << " " << y / 2 << endl;
            }
            else
            {
                if (x > y)
                {
                    cout << (x - y) / 2 << " " << y << endl;
                }
                else
                {
                    cout << x << " " << (y - x) / 2 << endl;
                }
            }
        }
        else
        {
            cout << -1 << " " << -1 << endl;
        }
    }

    return 0;
}
