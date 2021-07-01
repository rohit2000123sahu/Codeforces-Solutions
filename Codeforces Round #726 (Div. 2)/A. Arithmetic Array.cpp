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

        ll a[n];
        ll i;

        ll sum = 0;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum == n)
        {
            cout << 0 << endl;
        }
        else if (sum < n)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << sum - n << endl;
        }
    }

    return 0;
}
