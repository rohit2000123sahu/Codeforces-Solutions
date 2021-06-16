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

ll dp[10][200005];      // As the sub-problems generated are overlapping so we could use dp for better time complexity

ll solve(ll n, ll m)
{
    if (m <= 0)
    {
        return 0;
    }
    if (dp[n][m] != -1)
    {
        return dp[n][m];
    }
    ll ans = 0;
    ll req = 10 - n;
    if (m < req)
    {
        return 0;
    }
    ans += 1;                 // If m>=req then our len will increase by 1 and problem will get spit into two subproblems
    ans += solve(0, m - req); // First sub-problem
    ans = ans % MOD;
    ans += solve(1, m - req); // Second sub-problem
    ans = ans % MOD;
    dp[n][m] = ans;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    memset(dp, -1, sizeof(dp));

    while (T--)
    {
        ll n, m;
        cin >> n >> m;

        ll i;
        ll temp = n;
        ll len = 0;

        while (temp)
        {
            len += solve(temp % 10, m) + 1;     // Here 1 is added to for the original digit
            len %= MOD;
            temp = temp / 10;
        }

        cout << len << endl;
    }

    return 0;
}
