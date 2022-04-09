#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n - 3 << " " << 1 << " " << 1 << " " << 1 << endl;
    }
    else
    {
        cout << (n - 2) / 2 << " " << (n - 2) / 2 + 1 << " " << 1 << " " << 1 << endl;
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
