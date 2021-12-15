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
        ll i;
        vl vect(7);

        for (i = 0; i < 7; i++)
        {
            cin >> vect[i];
        }

        if (vect[0] + vect[1] == vect[2])
        {
            cout << vect[0] << " " << vect[1] << " " << vect[3] << endl;
        }
        else
        {
            cout << vect[0] << " " << vect[1] << " " << vect[2] << endl;
        }
    }

    return 0;
}
