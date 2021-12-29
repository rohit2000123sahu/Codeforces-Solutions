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
    
    // Observation 
    // The answer would always be either 0 or 1
    // If the total sum is divisible by n then it will be zero because after some finite steps we can make all equal
    // Else it would be 1
    
    while (t--)
    {
        ll n;
        cin >> n;

        vl vect(n);
        ll i;

        ll sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> vect[i];
            sum += vect[i];
        }

        if (sum % n == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;
        }
    }

    return 0;
}
