#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;

    if (x >= a)
    {
        x -= a;
        a = 0;
    }
    else
    {
        a -= x;
        x = 0;
    }

    if (y >= b)
    {
        y -= b;
        b = 0;
    }
    else
    {
        b -= y;
        y = 0;
    }

    if (x + y <= c)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
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
        solve();
    }

    return 0;
}
