#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 998244353

ll factorial[1001];

void solve()
{
    ll n;
    cin >> n;

    if (n % 2 != 0)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << (factorial[n / 2] * factorial[n / 2]) % MOD << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    factorial[0] = 1;
    for (ll i = 1; i <= 1000; i++)
    {
        factorial[i] = factorial[i - 1] * i;
        factorial[i] %= MOD;
    }

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
