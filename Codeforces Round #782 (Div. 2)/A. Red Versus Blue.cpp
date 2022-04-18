#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ll n, r, b;
    cin >> n >> r >> b;

    int p = r / (b + 1), q = r % (b + 1);
    for (int i = 0; i < q; i++)
        cout << string(p + 1, 'R') << 'B';
    for (int i = q; i < b; i++)
        cout << string(p, 'R') << 'B';
    cout << string(p, 'R');
    cout << endl;
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
