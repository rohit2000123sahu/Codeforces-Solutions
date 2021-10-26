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

string s;
ll n;

ll solve(char c)
{
    ll i, j;
    i = 0;
    j = n - 1;
    ll ans = 0;

    while (i < j)
    {
        if (s[i] == s[j])
        {
            i++;
            j--;
            continue;
        }
        else if (s[i] == c)
        {
            i++;
            ans++;
        }
        else if (s[j] == c)
        {
            j--;
            ans++;
        }
        else
        {
            return 1e7;
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
        cin >> n >> s;

        ll ans = 1e7;
        ll i;

        for (i = 0; i < 26; i++)
        {
            ans = min(ans, solve('a' + i));
        }

        if (ans == 1e7)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }

    return 0;
}
