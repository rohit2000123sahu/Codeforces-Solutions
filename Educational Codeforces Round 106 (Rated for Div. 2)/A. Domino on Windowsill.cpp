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
        ll n, k1, k2;
        cin >> n >> k1 >> k2;

        ll w, b;
        cin >> w >> b;

        if (k1 + k2 >= 2 * w && 2 * n - (k1 + k2) >= 2 * b)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
  
    }

    return 0;
}
