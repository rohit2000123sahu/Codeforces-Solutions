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

    vector<ll> nums(n);
    for (auto &num : nums)
    {
        cin >> num;
    }

    for (auto num : nums)
    {
        ll ans = 15;
        for (ll addCnt = 0; addCnt < 15; addCnt++)
        {
            for (ll mulCnt = 0; mulCnt <= 15; mulCnt++)
            {
                if (((num + addCnt) << mulCnt) % 32768 == 0)
                {
                    ans = min(ans, mulCnt + addCnt);
                }
            }
        }
        cout << ans << " ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    t = 1;
    while (t--)
    {
        solve();
    }

    return 0;
}
