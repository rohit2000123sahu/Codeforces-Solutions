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
  
    // This is the brute force.
    // We will just find all the answers and will print the minimum ans among all

    while (T--)
    {
        ll n;
        cin >> n;

        ll cost[n];
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> cost[i];
        }

        ll minimum_hor_cost[n];             // Minimum cost till ith in hor(dir1)
        ll minimum_ver_cost[n];             // Minimum cost till ith in ver(dir2)
        ll total_cost[n];

        minimum_hor_cost[0] = 1e15;
        minimum_ver_cost[0] = 1e15;

        total_cost[0] = cost[0];           // Filling the array with initial
        minimum_hor_cost[0] = cost[0];

        for (i = 1; i < n; i++)
        {
            total_cost[i] = total_cost[i - 1] + cost[i];
            if (i % 2 != 0)               // In one step we are going for dir1 and in other for dir2 i.e. alternate directions
            {
                minimum_ver_cost[i] = min(minimum_ver_cost[i - 1], cost[i]);
                minimum_hor_cost[i] = minimum_hor_cost[i - 1];
            }
            else
            {
                minimum_hor_cost[i] = min(minimum_hor_cost[i - 1], cost[i]);
                minimum_ver_cost[i] = minimum_ver_cost[i - 1];
            }
        }

        ll ans[n];
        ll hor = 0;         // To store the cordinates
        ll ver = 0;

        for (i = 0; i < n; i++)
        {
            if (i % 2 != 0)     // Alternating directions
            {
                ver++;
            }
            else
            {
                hor++;
            }

            ans[i] = total_cost[i] + minimum_ver_cost[i] * (n - ver) + minimum_hor_cost[i] * (n - hor);     // Finding the answer for everything
        }

        ll minimum_cost = 1e15;

        for (i = 0; i < n; i++)       
        {
            minimum_cost = min(ans[i], minimum_cost);
        }

        cout << minimum_cost << endl;
    }

    return 0;
}
