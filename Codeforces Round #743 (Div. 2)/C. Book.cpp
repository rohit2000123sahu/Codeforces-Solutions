// We have used the concept similar to topological sort along with the set

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

ll calc(vector<ll> arr)
{
    ll n = arr.size();
    ll i;
    ll ans = 1;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            ans++;
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
        ll n;
        cin >> n;

        vl adj[n + 1];
        ll conn[n + 1] = {0};

        ll i;

        for (i = 1; i <= n; i++)
        {
            ll sz;
            cin >> sz;

            for (ll j = 0; j < sz; j++)
            {
                ll temp;
                cin >> temp;
                adj[temp].pb(i);
                conn[i]++;
            }
        }

        set<ll> s;

        for (i = 1; i <= n; i++)
        {
            if (conn[i] == 0)
            {
                s.insert(i);
            }
        }

        vl ans;
        ll prev = 0;

        while (!s.empty())
        {
            ll ele;
            auto it = s.upper_bound(prev);      // Getting the element that is just greather than the previous element (crucial part of this problem). We have done this to get the minimum answer
            if (it == s.end())                  // Remove that element from the set
            {
                ele = *s.begin();
                s.erase(s.begin());
            }
            else
            {
                ele = *it;
                s.erase(it);
            }

            prev = ele;           // Updating previous

            ans.pb(ele);

            vl temp;
            for (auto c : adj[ele])
            {
                conn[c]--;
                if (conn[c] == 0)
                {
                    s.insert(c);    /// Inserting the elements in the set
                }
            }
        }

        for (i = 1; i <= n; i++)
        {
            if (conn[i] > 0)
            {
                break;
            }
        }

        if (i != n + 1)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << calc(ans) << endl;
        }
    }

    return 0;
}
