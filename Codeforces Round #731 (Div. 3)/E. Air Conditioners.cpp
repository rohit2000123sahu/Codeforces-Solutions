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
        ll n, k;
        cin >> n >> k;

        ll a[k];
        ll t[k];

        ll i;
        for (i = 0; i < k; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < k; i++)
        {
            cin >> t[i];
        }

        ll ans[n + 1];
        memset(ans, -1, sizeof(ans));

        priority_queue<pl, vpl, greater<pl>> q;

        for (i = 0; i < k; i++)
        {
            q.push({t[i], a[i]});
        }

        // Use BFS but the order will be decided by the lowest first and we will get the final answer
        // There are some corner cases need to be handle
        while (!q.empty())
        {
            ll temp = q.top().second;
            ll val = q.top().first;
            q.pop();
            if (ans[temp] == -1)
            {
                ans[temp] = val;
            }
            else
            {
                ans[temp] = min(ans[temp], val);
            }
            if (temp - 1 >= 1 && ans[temp - 1] == -1)
            {
                ans[temp - 1] = val + 1;
                q.push({ans[temp - 1], temp - 1});
            }
            if (temp + 1 <= n && ans[temp + 1] == -1)
            {
                ans[temp + 1] = val + 1;
                q.push({ans[temp + 1], temp + 1});
            }
        }

        for (i = 1; i <= n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
