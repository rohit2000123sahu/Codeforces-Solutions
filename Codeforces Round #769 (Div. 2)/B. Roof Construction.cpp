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
        ll n;
        cin >> n;

        ll b = 1;

        while (b * 2 < n)
        {
            b *= 2;
        }

        for (ll i = b - 1; i >= 0; i--)
        {
            cout << i << " ";
        }
        for (ll i = b; i < n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}
