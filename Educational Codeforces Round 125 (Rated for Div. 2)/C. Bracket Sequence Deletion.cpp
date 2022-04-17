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

    string s;
    cin >> s;

    ll l = 0;
    ll ans = 0;

    while (l + 1 < n)
    {
        if (s[l] == '(' || (s[l] == ')' && s[l + 1] == ')'))
        {
            l += 2;
        }
        else
        {
            ll r = l + 1;
            while (r < n && s[r] != ')')
            {
                ++r;
            }
            if (r == n)
            {
                break;
            }
            l = r + 1;
        }
        ++ans;
    }
    cout << ans << " " << n - l << endl;
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
