#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;

    if (n > m)
    {
        swap(n, m);
    }

    if (n == 1 && m == 1)
    {
        cout << 0 << endl;
        return;
    }
    if (n == 1 && m > 2)
    {
        cout << -1 << endl;
        return;
    }
    ll ans = (m + n - 2) + abs(m - n) - 1;
    if ((m + n) % 2 == 0)
    {
        ans++;
    }
    cout << ans << endl;
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
