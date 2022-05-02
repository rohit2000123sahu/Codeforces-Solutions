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

    ll total = 0;
    for (i = 0; i < n; i++)
    {
        total += vect[i] - 1;
    }

    if (total % 2 == 0)
    {
        cout << "maomao90" << endl;
    }
    else
    {
        cout << "errorgorn" << endl;
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
