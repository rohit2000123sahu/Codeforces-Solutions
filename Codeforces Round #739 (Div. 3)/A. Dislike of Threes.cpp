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

    vl vect;

    ll i;
  
    // Just brute force

    i = 1;
    ll count = 0;
    while (count <= 1000)
    {
        if (i % 3 == 0)
        {
            i++;
        }
        else if (i % 10 == 3)
        {
            i++;
        }
        else
        {
            vect.pb(i);
            count++;
            i++;
        }
    }

    while (T--)
    {
        ll temp;
        cin >> temp;
        cout << vect[temp - 1] << endl;
    }

    return 0;
}
