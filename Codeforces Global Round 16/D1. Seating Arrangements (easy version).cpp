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
        ll n, m;
        cin >> n >> m;

        ll i;
        ll a[m];
        vl vect;
        for (i = 0; i < m; i++)
        {
            cin >> a[i];
            vect.pb(a[i]);
        }

        bool filled[m];
        memset(filled, false, sizeof(filled));
        sort(all(vect));
        ll j;
        ll ans = 0;

        for (i = 0; i < m; i++)
        {
            ll temp = 0;
            for (j = 0; j < m; j++)
            {
                if (vect[j] == a[i])
                {
                    break;
                }
                else if (filled[j])
                {
                    temp++;
                }
            }
            while (j < m && filled[j] == false && vect[j] == a[i])
            {
                j++;
            }
            j--;
            filled[j] = true;
            ans += temp;
        }

        cout << ans << endl;
    }

    return 0;
}
