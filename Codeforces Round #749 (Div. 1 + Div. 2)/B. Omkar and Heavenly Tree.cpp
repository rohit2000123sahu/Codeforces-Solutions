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
  
    // Forming a star topology with the element that is not there as b (as a middle element) and rest as the nodes of it. 
    
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll i;
        bool avail[n + 1];
        memset(avail, false, sizeof(avail));
        for (i = 0; i < m; i++)
        {
            ll a, b, c;
            cin >> a >> b >> c;
            avail[b] = true;
        }

        ll middle = -1;
        for (i = 1; i <= n; i++)
        {
            if (avail[i] == false)
            {
                middle = i;
                break;
            }
        }

        for (i = 1; i <= n; i++)
        {
            if (i == middle)
                continue;
            cout << i << " " << middle << endl;
        }
    }

    return 0;
}
