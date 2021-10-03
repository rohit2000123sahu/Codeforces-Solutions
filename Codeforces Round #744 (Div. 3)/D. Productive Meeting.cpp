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

bool cmp(pl a, pl b)
{
    return a.first > b.first;
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

        vpl ans;
        multiset<pl, decltype(cmp) *> s(cmp);

        for (i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            if (temp > 0)
                s.insert({temp, i + 1});
        }

        while (s.size() > 1)
        {
            pl a = *s.begin();
            s.erase(s.begin());
            pl b = *s.begin();
            s.erase(s.begin());

            ans.pb(mp(a.second, b.second));
            a.first--;
            b.first--;
            if (a.first > 0)
                s.insert(a);
            if (b.first > 0)
                s.insert(b);
        }

        cout << ans.size() << endl;
        for (auto c : ans)
        {
            cout << c.first << " " << c.second << endl;
        }
    }

    return 0;
}
