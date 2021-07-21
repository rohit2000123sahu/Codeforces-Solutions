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
        ll n, a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        ll ans = 0;

        if (b >= 0)
        {
            ans += (a + b) * n;
        }
        else
        {
            ans += n * a;

            string temp = "";

            temp += s[0];

            ll i;
            for (i = 1; i < n; i++)
            {
                if (s[i] == s[i - 1])
                {
                    continue;
                }
                else
                {
                    temp += s[i];
                }
            }

            // cout << temp << endl;

            ans += b * (temp.size() / 2 + 1);
        }

        cout << ans << endl;
    }

    return 0;
}
