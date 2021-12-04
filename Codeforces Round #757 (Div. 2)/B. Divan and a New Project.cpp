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
        ll n;
        cin >> n;

        vpl vect;
        ll i;

        for (i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            vect.pb(mp(temp, i + 1));
        }

        sort(all(vect), greater<pl>());

        ll ans[n + 1];

        memset(ans, -1, sizeof(ans));

        ll val1 = 1;
        ll val2 = -1;
        bool flag = true;
        ans[0] = 0;

        // The main idea is that we will make the haed office at 0 then we will start assiging the minimum positions to the location which is visited most of the times
        ll walk = 0;
        for (auto c : vect)
        {
            if (flag)
            {
                ans[c.second] = val1;
                walk += val1 * c.first;
                val1++;
                flag = false;
            }
            else
            {
                ans[c.second] = val2;
                walk += val2 * -1 * c.first;
                val2--;
                flag = true;
            }
        }

        cout << walk * 2 << endl;

        for (auto c : ans)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
