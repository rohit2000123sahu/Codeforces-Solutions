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

        vector<ll> vect(n);
        map<ll, ll> mp;
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> vect[i];
            mp[vect[i]]++;
        }

        ll one = 0;
        ll more = 0;
        ll diff = 0;
        for (auto c : mp)
        {
            if (c.second == 1)
            {
                one++;
            }
            else
            {
                more++;
            }
            diff++;
        }

        vector<ll> ans;

        for (ll k = 1; k <= n; k++)
        {
            if (k > one + more)
                diff++;
            ans.push_back(diff);
        }

        for (auto c : ans)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
