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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, m;
    cin >> n >> m;

    ll dp[n + 1] = {0};

    dp[0] = dp[1] = 1;

    ll pre[n + 1] = {0};

    pre[0] = pre[1] = 1;

    ll i, j;

    for (i = 2; i <= n; i++)
    {
        dp[i] = pre[i - 1];
        ll ac = sqrt(i);
        for (j = 2; j <= ac; j++)
        {
            dp[i] += dp[i / j];
            dp[i] %= m;
        }
        for (ll k = 1; k < i / ac; k++)
        {
            ll temp = 0;
            temp = (i / k) - (i / (k + 1));
            dp[i] += (dp[k] * temp) % m;
            dp[i] %= m;
        }

        pre[i] = pre[i - 1] + dp[i];
        pre[i] %= m;
    }

    cout << dp[n] << endl;

    return 0;
}
