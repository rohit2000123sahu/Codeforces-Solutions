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
        ll n, m, i, j;
        cin >> n >> m;

        vector<string> org;
        vector<string> mod;

        for (i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;

            org.pb(temp);
        }

        for (i = 0; i < n - 1; i++)
        {
            string temp;
            cin >> temp;

            mod.pb(temp);
        }

        string ans = "";
        for (i = 0; i < m; i++)
        {
            ll a[26] = {0};
            for (j = 0; j < n; j++)
            {
                a[org[j][i] - 'a']++;
            }
            for (j = 0; j < n - 1; j++)
            {
                a[mod[j][i] - 'a']--;
            }

            for (j = 0; j < 26; j++)
            {
                if (a[j] > 0)
                {
                    ans += 'a' + j;
                }
            }
        }

        cout << ans << endl;

        // cout << 1 << endl;
        cout.flush();
    }

    return 0;
}
