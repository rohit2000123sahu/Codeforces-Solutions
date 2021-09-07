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

        ll i;
        string s;
        cin >> s;

        string ans;

        for (i = 0; i < n; i++)
        {
            if (s[i] == 'U')
            {
                ans += 'D';
            }
            else if (s[i] == 'D')
            {
                ans += 'U';
            }
            else
            {
                ans += s[i];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
