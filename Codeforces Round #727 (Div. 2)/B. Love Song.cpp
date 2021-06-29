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
    T = 1;

    while (T--)
    {
        ll n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        ll i;
        ll count[n][26] = {0};

        for (i = 0; i < n; i++)
        {
            for (ll j = 0; j < 26; j++)
            {
                if (i - 1 >= 0)
                {
                    count[i][j] = count[i - 1][j];
                }
            }
            count[i][s[i] - 'a']++;
        }

        while (q--)
        {
            ll l, r;
            cin >> l >> r;
            l--;
            r--;

            ll c = 0;

            for (ll j = 0; j < 26; j++)
            {
                c += count[r][j] * (j + 1);
            }

            if (l > 0)
            {
                for (ll j = 0; j < 26; j++)
                {
                    c -= count[l - 1][j] * (j + 1);
                }
            }

            cout << c << endl;
        }
    }

    return 0;
}
