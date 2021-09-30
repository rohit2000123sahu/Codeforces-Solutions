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

        ll a[n + 1];
        vl vect;
        ll i;

        for (i = 1; i <= n; i++)
        {
            cin >> a[i];
            vect.pb(a[i]);
        }

        sort(all(vect));

        vector<vector<ll>> ans;

        for (i = 1; i <= n; i++)
        {
            if (vect[i - 1] != a[i])
            {
                ll j = i;
                while (j <= n)
                {
                    if (a[j] == vect[i - 1])
                    {
                        break;
                    }
                    j++;
                }
                vl temp;
                temp.pb(i);
                temp.pb(j);
                temp.pb(j - i);

                ll prev = a[j];
                for (ll k = i; k <= j; k++)
                {
                    ll temp_num = prev;
                    prev = a[k];
                    a[k] = temp_num;
                }

                ans.pb(temp);
            }
        }

        cout << ans.size() << endl;
        for (i = 0; i < ans.size(); i++)
        {
            for (ll j = 0; j < 3; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
