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
        ll n, x;
        cin >> n >> x;

        vector<ll> vect(n);
        ll i;

        map<ll, ll> mp;
        for (i = 0; i < n; i++)
        {
            cin >> vect[i];
            mp[vect[i]]++;
        }

        ll ans = 0;
        for (auto c : mp)
        {
            ll num = c.first;
            ll freq = c.second;

            // cout << num << " " << freq << endl;

            if (freq == 0)
            {
                continue;
            }

            ll req = num * x;
            if (mp.find(req) != mp.end())
            {
                if (mp[req] > freq)
                {
                    mp[req] = mp[req] - freq;
                }
                else
                {
                    ans += freq - mp[req];
                    // cout << freq - mp[req] << endl;
                    mp[req] = 0;
                }
            }
            else
            {
                ans += freq;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
