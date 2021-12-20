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
        ll n, k;
        cin >> n >> k;

        vl vect(n);
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> vect[i];
        }

        sort(all(vect), greater<ll>());

        map<ll, ll> mp;
        for (i = 0; i < 2 * k; i++)
        {
            mp[vect[i]]++;
        }
        
        // The main idea is that we will select the first 2k greatest elements and will see if there are same elements having count greater than k

        ll ans = 0;
        ll maxi = 0;
        ll other = 0;
        for (auto c : mp)
        {
            if (c.second > k)
            {
                maxi = c.second;
            }
            else
            {
                other += c.second;
            }
        }

        if (maxi > 0)
        {
            ans += (maxi - other) / 2;
        }

        for (i = 2 * k; i < n; i++)
        {
            ans += vect[i];
        }

        cout << ans << endl;
    }

    return 0;
}
