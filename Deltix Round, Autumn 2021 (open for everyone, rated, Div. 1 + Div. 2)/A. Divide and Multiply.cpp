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

ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll temp = power(a, b / 2);
    ll ans = temp * temp;
    if (b % 2 == 0)
    {
        return ans;
    }
    else
    {
        ans = ans * a;
        return ans;
    }
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
        ll n;
        cin >> n;

        ll i;
        vl vect;

        for (i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            vect.pb(temp);
        }

        vl fact;
        vl rem;
        for (i = 0; i < n; i++)
        {
            ll temp = vect[i];
            ll ft = 0;
            while (temp % 2 == 0)
            {
                temp = temp / 2;
                ft++;
            }
            fact.pb(ft);
            rem.pb(temp);
        }

        ll rem_total = 0;
        ll total = 0;
        for (auto c : fact)
        {
            total += c;
        }

        for (auto c : rem)
        {
            rem_total += c;
        }

        ll ans = 0;

        for (i = 0; i < n; i++)
        {
            ll temp = vect[i] * power(2, total - fact[i]);
            temp += rem_total - rem[i];
            ans = max(ans, temp);
        }

        cout << ans << endl;
    }

    return 0;
}
