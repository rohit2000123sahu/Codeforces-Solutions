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
    
    // We will use greedy approach here and will first give preference to the nearest mouse
    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        vector<ll> vect;

        ll i;
        for (i = 0; i < k; i++)
        {
            ll temp;
            cin >> temp;
            vect.pb(temp);
        }

        sort(all(vect), greater<ll>());
        ll moves_left = n;

        for (i = 0; i < k; i++)
        {
            ll req = n - vect[i];
            if (moves_left > req)
            {
                moves_left -= req;
            }
            else
            {
                break;
            }
        }
        cout << i << endl;
    }

    return 0;
}
