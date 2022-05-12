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

    vector<ll> vect(n);
    ll i;

    for (i = 0; i < n; i++)
    {
        cin >> vect[i];
    }

    ll ans = 0;
    for (i = n - 2; i >= 0; i--)
    {
        while (vect[i] >= vect[i + 1] && vect[i] > 0)
        {
            vect[i] /= 2;
            ans++;
        }

        if (vect[i] == vect[i + 1])
        {
            cout << -1 << endl;
            return;
        }
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
