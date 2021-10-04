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
        ll n, d;
        cin >> n >> d;

        ll a[n];
        ll i;
        queue<ll> q;
        bool visited[n];
        memset(visited, false, sizeof(visited));

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] == 0)
            {
                q.push(i);
                visited[i] = true;
            }
        }

        ll ans = 0;

        while (!q.empty())
        {
            int sz = q.size();
            for (i = 0; i < sz; i++)
            {
                ll tp = q.front();
                q.pop();

                ll new_pos = (tp + d) % n;

                if (!visited[new_pos])
                {
                    q.push(new_pos);
                    visited[new_pos] = true;
                }
            }
            ans++;
        }

        ans--; // Iteration not counted when done for the last one because nothing progress will be there

        for (i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                ans = -1;
                break;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
