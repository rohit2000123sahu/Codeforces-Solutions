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

bool comp(pl a, pl b)
{
    return a.S < b.S;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    vector<pair<ll, ll>> vect;
    ll i, j;

    for (i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        vect.pb({a, b});
    }

    sort(all(vect), comp);

    i = 0;
    j = n - 1;

    ll ans = 0;
    ll total = 0;

    while (i <= j)
    {
        if (total + vect[j].first < vect[i].second)
        {
            total += vect[j].first;
            ans += 2 * vect[j].first;
            j--;
        }
        else
        {
            ll temp = vect[i].second - total;
            total += temp;
            ans += temp * 2;

            vect[j].first -= temp;

            while (i <= j && vect[i].second <= total)
            {
                ans += vect[i].first;
                total += vect[i].first;
                i++;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
