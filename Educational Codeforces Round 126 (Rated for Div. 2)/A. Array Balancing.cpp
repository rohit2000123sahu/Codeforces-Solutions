#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

ll sum(ll a1, ll a2, ll b1, ll b2)          // Function to calculate the sum
{
    return abs(a1 - a2) + abs(b1 - b2);
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    ll i;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    ll ans = 0;
    for (i = 1; i < n; i++)                 // We will go greedy
    {
        if (sum(a[i - 1], a[i], b[i - 1], b[i]) > sum(a[i - 1], b[i], b[i - 1], a[i]))      // If we got the more sum then we will swap a[i] and b[i], 
        {                                                                                   // swapping does not cause our previous answer change
            swap(a[i], b[i]);
        }
        ans += sum(a[i - 1], a[i], b[i - 1], b[i]);
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
