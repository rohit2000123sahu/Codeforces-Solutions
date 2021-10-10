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

bool sorted(ll arr[], ll n)
{
    ll i;
    for (i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i])
        {
            return false;
        }
    }

    return true;
}

bool check(ll arr[], ll x, ll n)
{
    vl vect;
    ll i;
    for (i = 0; i < n; i++)
    {
        vect.pb(arr[i]);
    }

    sort(all(vect));

    for (i = n - x; i < x; i++)
    {
        if (arr[i] != vect[i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;

        ll i;
        ll arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if (n >= 2 * x || sorted(arr, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            if (check(arr, x, n))
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
