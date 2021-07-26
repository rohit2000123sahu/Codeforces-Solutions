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

    while (T--)
    {
        ll n;
        cin >> n;

        ll coins = n / 3;     // Base coins considering one 1 value coin and other 2 value coin
        if (n % 3 == 1)       // This is for the left coin
        {
            cout << coins + 1 << " " << coins << endl;
        }
        else if (n % 3 == 2)
        {
            cout << coins << " " << coins + 1 << endl;
        }
        else
        {
            cout << coins << " " << coins << endl;
        }
    }

    return 0;
}
