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

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        ll n = s.size();
        vector<ll> next_index(n, -1);

        vector<ll> last_index(26, -1);

        ll i;
        for (i = 0; i < n; i++)
        {
            ll alpha = s[i] - 'a';
            if (last_index[alpha] == -1)
            {
                last_index[alpha] = i;
            }
            else
            {
                next_index[last_index[alpha]] = i;
                last_index[alpha] = i;
            }
        }

        vector<ll> dp(n + 1, -1);

        dp[0] = 0;
        for (i = 0; i < n; i++)
        {
            dp[i + 1] = max(dp[i + 1], dp[i]);
            if (next_index[i] != -1)
            {
                dp[next_index[i] + 1] = max(dp[next_index[i] + 1], dp[i] + 2);
            }
        }

        cout << n - dp[n] << endl;
    }

    return 0;
}
