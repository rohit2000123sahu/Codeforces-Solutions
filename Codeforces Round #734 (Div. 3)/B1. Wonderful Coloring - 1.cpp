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
        string s;
        cin >> s;
        ll i;

        ll n = s.size();
        ll a[26] = {0};

        for (i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }

        ll one = 0;
        ll ans = 0;
        for (i = 0; i < 26; i++)
        {
            if (a[i] >= 2)
            {
                ans++;
            }
            else if (a[i] == 1)
            {
                one++;
            }
        }

        ans += one / 2;

        cout << ans << endl;
    }

    return 0;
}
