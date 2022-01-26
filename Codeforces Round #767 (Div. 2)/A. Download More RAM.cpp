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
        ll n, k;
        cin >> n >> k;

        ll i;
        vector<pair<ll, ll>> softwares(n);
        
        // We will go greedy here, will try for the minimum requirement first and will update the RAM accordingly

        for (i = 0; i < n; i++)
        {
            cin >> softwares[i].first;
        }

        for (i = 0; i < n; i++)
        {
            cin >> softwares[i].second;
        }

        sort(softwares.begin(), softwares.end());

        for (i = 0; i < n; i++)
        {
            if (softwares[i].first <= k)
            {
                k += softwares[i].second;
            }
            else
            {
                break;
            }
        }

        cout << k << endl;
    }

    return 0;
}
