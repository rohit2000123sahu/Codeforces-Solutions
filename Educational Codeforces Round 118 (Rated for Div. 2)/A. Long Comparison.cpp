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
    ans = ans % MOD;
    if (b % 2 == 0)
    {
        return ans;
    }
    else
    {
        ans = ans * a;
        ans = ans % MOD;
        return ans;
    }
}

ll length(ll x)
{
    ll temp = 0;
    while (x)
    {
        x = x / 10;
        temp++;
    }
    return temp;
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
        ll x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;

        ll l1 = length(x1);
        ll l2 = length(x2);

        if (l1 + p1 > l2 + p2)
        {
            cout << ">" << endl;
        }
        else if (l1 + p1 < l2 + p2)
        {
            cout << "<" << endl;
        }
        else
        {
            if (l1 < l2)
            {
                x1 = x1 * power(10, l2 - l1);
            }
            else if (l1 > l2)
            {
                x2 = x2 * power(10, l1 - l2);
            }

            //cout << x1 << " " << x2 << endl;

            if (x1 == x2)
            {
                cout << "=" << endl;
            }
            else if (x1 > x2)
            {
                cout << ">" << endl;
            }
            else
            {
                cout << "<" << endl;
            }
        }
    }

    return 0;
}
