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
        ll n, B, x, y;
        cin >> n >> B >> x >> y;

        ll i;
        ll ans = 0;
        ll cur = 0;
        
        // We will use greedy
        
        for (i = 0; i < n; i++)
        {
            if (cur + x <= B)    // Till when it is possible we will go by adding it, if not possible we will decrement it
            {
                cur += x;
            }
            else
            {
                cur -= y;
            }
            ans += cur;
        }
        cout << ans << endl;
    }

    return 0;
}
