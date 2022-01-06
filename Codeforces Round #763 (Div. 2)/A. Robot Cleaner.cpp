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
        ll n, m, rb, cb, rd, cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;

        ll ans = 0;
        ll dr = 1;
        ll dc = 1;
        while (1)
        {
            // cout << rb << " " << cb << endl;
            if (rb == rd || cb == cd)
            {
                break;
            }

            if (rb == n)
            {
                dr = -1;
            }
            else if (rb == 0)
            {
                dr = 1;
            }

            if (cb == m)
            {
                dc = -1;
            }
            else if (cb == 0)
            {
                dc = 1;
            }

            rb += dr;
            cb += dc;
            ans += 1;
        }
        cout << ans << endl;
    }

    return 0;
}
