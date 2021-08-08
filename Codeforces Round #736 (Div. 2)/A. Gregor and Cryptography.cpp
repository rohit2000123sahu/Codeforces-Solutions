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
  
    // There are two solutions for this either we could choose 2 and P-1 
    // Second one is we will loop until 1000 and will store the modulo and number mapping in map
 

    while (T--)
    {
        ll p;
        cin >> p;

        ll loop = min((ll)1000, p);
        map<ll, ll> m;
        ll i;
        for (i = 2; i <= loop; i++)
        {
            ll temp = p % i;
            if (m.find(temp) == m.end())    // If it is not present then store the mapping in the map
            {
                m[temp] = i;
            }
            else                            // If it is present then we got the two numbers with same modulo, one is in map and other is i hence print them and break the loop
            {
                cout << m[temp] << " " << i << endl;
                break;
            }
        }
    }

    return 0;
}
