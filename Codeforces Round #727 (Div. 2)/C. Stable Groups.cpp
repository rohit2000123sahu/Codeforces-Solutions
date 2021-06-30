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

    ll n, k, x;
    cin >> n >> k >> x;

    ll a[n];
    ll i;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    ll groups = 1;
    vector<ll> req;

    for (i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] > x)
        {
            groups++;
            ll temp = a[i] - a[i - 1] - 1;
            if (temp > 0)
            {
                req.pb(temp / x);
            }
        }
    }

    // cout << groups << endl;

    sort(all(req));
    i = 0;

    while (k > 0 && i < req.size())
    {
        if (k - req[i] >= 0)
        {
            groups--;
            k = k - req[i];
            i++;
        }
        else
        {
            break;
        }
    }

    cout << groups << endl;

    return 0;
}
