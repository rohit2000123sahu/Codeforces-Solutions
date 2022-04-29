#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ll n, k;
    cin >> n >> k;

    vector<ll> vect(n);
    ll i;
    for (i = 0; i < n; i++)
    {
        cin >> vect[i];
    }

    ll count[32] = {0};
    for (i = 0; i < n; i++)
    {
        ll num = vect[i];
        ll index = 0;
        while (num)
        {
            if (num & 1)
            {
                count[index]++;
            }
            index++;
            num = num >> 1;
        }
    }

    ll ans[32] = {0};
    for (i = 30; i >= 0; i--)
    {
        if (n - count[i] <= k)
        {
            k -= (n - count[i]);
            ans[i] = 1;
        }
    }

    ll power = 1;
    ll temp = 0;
    for (i = 0; i <= 30; i++)
    {
        if (ans[i])
        {
            temp += power;
        }
        power *= 2;
    }

    cout << temp << endl;
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
