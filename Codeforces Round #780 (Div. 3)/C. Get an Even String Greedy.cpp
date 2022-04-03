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

ll solve(string &s, ll start, ll finish, vector<ll> &next_index)
{
    if (start > finish)
    {
        return 0;
    }
    ll i = start;
    ll ans = 0;
    while (i <= finish)
    {
        if (i + 1 <= finish && s[i + 1] == s[i])
        {
            i += 2;
        }
        else
        {
            if (next_index[i] == -1 || next_index[i] > finish)
            {
                ans += 1;
                i++;
            }
            else
            {
                ll cost_substring = solve(s, i + 1, next_index[i] - 1, next_index);
                ll total_cost = (next_index[i] - 1) - (i + 1) + 1;
                // cout << temp << " " << len << endl;
                if (total_cost >= cost_substring + 1)
                {
                    ans += cost_substring + 1;
                    i = next_index[i];
                }
                else
                {
                    ans += total_cost;
                    i = next_index[i] + 1;
                }
            }
        }
    }

    return ans;
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

        cout << solve(s, 0, n - 1, next_index) << endl;
    }

    return 0;
}
