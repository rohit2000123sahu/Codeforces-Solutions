#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
typedef unordered_map<ll, ll> uml;
typedef vector<pl> vpl;
typedef map<ll, ll> ml;

ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll temp = power(a, b / 2);
    if (b % 2 != 0)
    {
        return (((temp * temp) % MOD) * a) % MOD;
    }
    else
    {
        return (temp * temp) % MOD;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    while (T--)
    {
        ll n, k;
        cin >> n >> k;

        ll dp[k + 1];
        dp[0] = 1;

        ll i;

        if (n % 2 != 0)                       // In this the situation will never arise when AND is 1 and XOR is 0
        {
            ll num = power(2, n - 1) + 1;
            for (i = 1; i <= k; i++)          
            {
                dp[i] = num * dp[i - 1];
                dp[i] %= MOD;
            }
            cout << dp[k] << endl;
        }
        else                                // It will only arise here. So we will consider this case as a separate standard case
        {
            ll num = power(2, n - 1) - 1; // For AND is zero
            ll pow = power(2, n);
            for (i = 1; i <= k; i++)
            {

                // When AND is zero

                dp[i] = (num * dp[i - 1]) % MOD;
                dp[i] %= MOD;

                // When AND is one         // This is that case
                dp[i] += power(2, n * (i - 1));
                dp[i] %= MOD;
            }

            cout << dp[k] << endl;
        }
    }

    return 0;
}
