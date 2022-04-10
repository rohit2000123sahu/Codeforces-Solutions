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
    for (auto &c : vect)
    {
        cin >> c;
    }

    map<ll, ll> counts;
    for (auto c : vect)
    {
        counts[c]++;
    }

    ll max_count = 0;
    for (auto c : counts)
    {
        max_count = max(max_count, c.second);
    }

    ll ans = 0;
    ll curr = max_count;
    while (curr < n)
    {
        if (curr * 2 < n)
        {
            ans += 1; // Creating the copy of the array
            ans += curr;
            curr *= 2;
        }
        else
        {
            ans += 1;
            ans += (n - curr);
            break;
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
