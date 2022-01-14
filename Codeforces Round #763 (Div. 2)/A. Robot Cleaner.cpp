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
    
    // Brute Force

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, rb, cb, rd, cd;
        cin >> n >> m >> rb >> cb >> rd >> cd;

        ll ans = 0;
        ll dr = 1;  // Initial Condition
        ll dc = 1;
        while (1)
        {
            if (rb == rd || cb == cd)       // Final Condition
            {
                break;
            }

            if (rb == n)                    // Changing dr to -1
            {
                dr = -1;
            }
            else if (rb == 0)               // Changing dr to 1
            {
                dr = 1;
            }

            if (cb == m)                    // Changing dc to -1
            {
                dc = -1;
            }
            else if (cb == 0)               // Changing dc to 1
            {
                dc = 1;
            }

            rb += dr;                   // Updating rb and cb
            cb += dc;
            ans += 1;                   // Incrementing answer by 1
        }
        cout << ans << endl;
    }

    return 0;
}
