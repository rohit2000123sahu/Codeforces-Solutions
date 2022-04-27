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

    vector<ll> pref(n), suff(n);
    pref[0] = vect[0];
    for (i = 1; i < n; i++)
    {
        pref[i] = pref[i - 1] + vect[i];
    }

    suff[n - 1] = vect[n - 1];
    for (i = n - 2; i >= 0; i--)
    {
        suff[i] = suff[i + 1] + vect[i];
    }

    ll j;
    i = 0;
    j = n - 1;

    ll ans = 0;

    while (i < j)
    {
        if (pref[i] == suff[j])
        {
            ans = max(ans, i + 1 + n - j);
            i++;
            j--;
        }
        else if (pref[i] > suff[j])
        {
            j--;
        }
        else
        {
            i++;
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
