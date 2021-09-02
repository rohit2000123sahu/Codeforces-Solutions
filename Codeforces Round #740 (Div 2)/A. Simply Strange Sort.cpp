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

bool check(ll a[], ll n)
{
    ll i;
    for (i = 1; i <= n; i++)
    {
        if (a[i] != i)
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
        ll n;
        cin >> n;

        ll i;
        ll a[n + 1];
        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (i = 1; i <= n + 10; i++)
        {
            if (check(a, n))
            {
                cout << i - 1 << endl;
                break;
            }
            ll j;
            if (i % 2 != 0)
            {
                for (j = 1; j <= n - 2; j = j + 2)
                {
                    if (a[j] > a[j + 1])
                    {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
            else
            {
                for (j = 2; j <= n - 1; j = j + 2)
                {
                    if (a[j] > a[j + 1])
                    {
                        swap(a[j], a[j + 1]);
                    }
                }
            }

            // for (j = 1; j <= n; j++)
            // {
            //     cout << a[j] << " ";
            // }
            // cout << endl;
        }
    }

    return 0;
}
