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

ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll temp = power(a, b / 2);
    ll ans = temp * temp;
    if (b % 2 == 0)
    {
        return ans;
    }
    else
    {
        ans = ans * a;
        return ans;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    ll pointer = 0;
    ll value = 1;
    while (value <= 1000000000)
    {
        value *= 3;
        pointer++;
    }

    // cout << pointer << endl;

    while (t--)
    {
        ll n;
        cin >> n;

        if (n > pointer)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            ll ans = 1;
            for (ll i = 0; i <= n - 1; i++)
            {
                cout << ans << " ";
                ans *= 3;
            }
            cout << endl;
        }
    }

    return 0;
}
