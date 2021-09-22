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

ll n = 0;
ll cnt = 0;

void solve(string ans, ll open, ll close)   // Simple brute force
{
    // cout << ans << " " << open << " " << close << endl;
    if (cnt >= n)
    {
        return;
    }
    if (open == 0 && close == 0)
    {
        cout << ans << endl;
        cnt++;
        return;
    }
    if (open > 0)
    {
        solve(ans + '(', open - 1, close);
    }
    solve(ans + ')', open, close - 1);
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
        cin >> n;
        cnt = 0;

        string ans;
        solve(ans, n, n);
    }

    return 0;
}
