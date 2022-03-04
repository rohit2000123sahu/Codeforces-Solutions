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
        ll hc, dc;
        cin >> hc >> dc;

        ll hm, dm;
        cin >> hm >> dm;

        ll k, w, a;
        cin >> k >> w >> a;

        ll i;
        bool flag = false;
        for (i = 0; i <= k; i++)
        {
            ll new_hc = hc + i * a;
            ll new_dc = dc + (k - i) * w;

            if ((hm + new_dc - 1) / new_dc <= (new_hc + dm - 1) / dm)
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
