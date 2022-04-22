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

    map<ll, ll> mp;
    for (auto num : vect)
    {
        mp[num]++;
    }

    for (auto itr : mp)
    {
        if (itr.second >= 3)
        {
            cout << itr.first << endl;
            return;
        }
    }
    cout << -1 << endl;
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
