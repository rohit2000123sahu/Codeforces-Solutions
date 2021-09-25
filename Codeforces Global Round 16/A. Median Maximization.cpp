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
        ll n, s;
        cin >> n >> s;

        ll i;

        ll left;
        if (n % 2 == 0)
        {
            left = (n / 2) - 1;
        }
        else
        {
            left = n / 2;
        }

        ll rm = s;
        ll right = n - left;

        ll median = rm / right;
        cout << median << endl;
    }

    return 0;
}
