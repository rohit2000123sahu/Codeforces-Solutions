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

    ll n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    vector<vector<ll>> per(6, vector<ll>(n + 1));
    string temp = "abc";

    ll index = 0;
    ll i;

    while (index < 6)
    {
        for (i = 1; i <= n; i++)
        {
            per[index][i] = per[index][i - 1] + (s[i - 1] != temp[(i - 1) % 3]);
        }
        index++;
        next_permutation(all(temp));
    }

    while (q--)
    {
        ll l, r;
        cin >> l >> r;

        ll ans = 2e5;

        for (i = 0; i < 6; i++)
        {
            ans = min(ans, per[i][r] - per[i][l - 1]);
        }

        cout << ans << endl;
    }

    return 0;
}
