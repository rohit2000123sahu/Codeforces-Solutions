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

    ll T;
    cin >> T;

    while (T--)
    {
        string s;
        cin >> s;

        ll n = s.size();

        ll ans[n];
        ans[0] = 1;

        ll dp[n][2] = {0};
        if (s[0] == '0')
        {
            dp[0][0] = 1;
        }
        else if (s[0] == '1')
        {
            dp[0][1] = 1;
        }
        else
        {
            dp[0][0] = 1;
            dp[0][1] = 1;
        }

        ll i;
        for (i = 1; i < n; i++)
        {
            if (s[i] == '0')
            {
                if (s[i - 1] == '0')
                {
                    dp[i][0] = 1;
                }
                else if (s[i - 1] == '1')
                {
                    dp[i][0] = 1 + dp[i - 1][1];
                }
                else
                {
                    dp[i][0] = 1 + dp[i - 1][1];
                }
                ans[i] = dp[i][0];
            }
            else if (s[i] == '1')
            {
                if (s[i - 1] == '1')
                {
                    dp[i][1] = 1;
                }
                else if (s[i - 1] == '0')
                {
                    dp[i][1] = 1 + dp[i - 1][0];
                }
                else
                {
                    dp[i][1] = 1 + dp[i - 1][0];
                }
                ans[i] = dp[i][1];
            }
            else
            {
                dp[i][0] = 1 + dp[i - 1][1];
                dp[i][1] = 1 + dp[i - 1][0];

                ans[i] = max(dp[i][0], dp[i][1]);
            }
        }

        // for (auto c : dp)
        // {
        //     cout << c[0] << " " << c[1] << endl;
        // }
        // cout << endl;

        ll sum = 0;
        for (i = 0; i < n; i++)
        {
            sum += ans[i];
        }

        cout << sum << endl;
    }

    return 0;
}
