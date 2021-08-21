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

ll compute(ll a, ll b)
{
    vl dig_a;
    while (a != 0)
    {
        dig_a.pb(a % 10);
        a = a / 10;
    }
    reverse(all(dig_a));

    vl dig_b;
    while (b != 0)
    {
        dig_b.pb(b % 10);
        b = b / 10;
    }
    reverse(all(dig_b));

    ll ans = 0;

    ll i = 0, j = 0;

    ll n = dig_a.size();
    ll m = dig_b.size();

    while (i < n && j < m)
    {
        if (dig_a[i] == dig_b[j])
        {
            i++;
            j++;
        }
        else
        {
            i++;
            ans++;
        }
    }

    if (j < m)
    {
        ans += m - j;
    }

    if (i < n)
    {
        ans += n - i;
    }

    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    vl vect;
    ll i;
    ll num = 1;

    for (i = 0; i <= 63; i++)
    {
        vect.pb(num);
        num = num * 2;
    }

    while (T--)
    {
        cin >> num;
        ll ans = 10000;
        for (i = 0; i <= 63; i++)
        {
            ans = min(ans, compute(num, vect[i]));
        }

        cout << ans << endl;
    }

    return 0;
}
