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
  
    // Key observation is that after n moves array will become constant i.e. no changes after n moves

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<vector<ll>> comb;
        ll i;
        vector<ll> a;
        for (i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            a.pb(temp);
        }
        comb.pb(a);
        ll prev = 0;

        while (prev <= n)
        {
            map<ll, ll> m;
            vl temp;
            for (i = 0; i < n; i++)
            {
                m[comb[prev][i]]++;
            }

            for (i = 0; i < n; i++)
            {
                temp.pb(m[comb[prev][i]]);
            }

            comb.pb(temp);
            prev++;
        }

        ll q;
        cin >> q;
        while (q--)
        {
            ll index, k;
            cin >> index >> k;
            index--;

            if (k > n)
            {
                k = n;
            }

            cout << comb[k][index] << endl;
        }
    }

    // cout << 1 << endl;

    return 0;
}
