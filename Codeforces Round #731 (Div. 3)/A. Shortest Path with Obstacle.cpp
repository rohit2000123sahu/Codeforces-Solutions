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
        ll a1, a2;
        ll b1, b2;
        ll f1, f2;
        cin >> a1 >> a2 >> b1 >> b2 >> f1 >> f2;

        ll ans = abs(a1 - b1) + abs(a2 - b2);

        if (a1 == b1 && b1 == f1)
        {
            if (f2 > a2 && f2 < b2)
                ans += 2;
            else if (f2 > b2 && f2 < a2)
                ans += 2;
        }
        else if (a2 == b2 && b2 == f2)
        {
            if (f1 > a1 && f1 < b1)
                ans += 2;
            else if (f1 > b1 && f1 < a1)
                ans += 2;
        }

        cout << ans << endl;
    }

    return 0;
}
