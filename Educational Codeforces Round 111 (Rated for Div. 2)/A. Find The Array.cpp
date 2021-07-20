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
        ll s;
        cin >> s;

        ll num = 1;
        ll ans = 0;

        // For minimizing the size of the array we need to took maximum possible number.
        // Hence we will took number in the order 1, 3, 5, 7 etc.
        // This will result in the optimised answer
      
        while (s > 0)
        {
            s = s - num;
            ans++;
            num += 2;
        }

        cout << ans << endl;
    }

    return 0;
}
