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

        ll ans = 0;
        ll i = 1;

        set<ll> s;

        while (1)
        {
            if (i * i > n)
            {
                break;
            }
            if (i * i <= n && s.find(i * i) == s.end())
            {
                s.insert(i * i);
                ans++;
            }
            if (i * i * i <= n && s.find(i * i * i) == s.end())
            {
                s.insert(i * i * i);
                ans++;
            }
            i++;
        }

        cout << ans << endl;
    }

    return 0;
}
