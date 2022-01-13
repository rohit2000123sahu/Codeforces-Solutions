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

        string s;
        cin >> s;

        ll count[26] = {0};

        ll i;
        for (i = 0; i < n; i++)
        {
            count[s[i] - 'a']++;
        }

        ll even = 0;
        ll odd = 0;

        for (i = 0; i < 26; i++)
        {
            if (count[i] % 2 != 0)
            {
                odd++;
            }
            even += count[i] / 2;
        }

        ll ans = 2 * (even / k);
        odd += 2 * (even % k);

        if (odd >= k)
        {
            ans++;
        }

        cout << ans << endl;
    }

    return 0;
}
