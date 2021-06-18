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
        ll e;
        cin >> e;

        if (e == 100)
        {
            cout << 1 << endl;
            continue;
        }

        ll w = 100 - e;

        ll i = 2;

        while (i <= 100)
        {
            if (e % i == 0 && w % i == 0)
            {
                e = e / i;
                w = w / i;
            }
            else
            {
                i++;
            }
        }

        cout << e + w << endl;
    }

    return 0;
}
