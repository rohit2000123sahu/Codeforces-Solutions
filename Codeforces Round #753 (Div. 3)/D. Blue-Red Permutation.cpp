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

        ll a[n];
        ll i;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        string colors;
        cin >> colors;

        vector<ll> red, blue;
        for (i = 0; i < n; i++)
        {
            if (colors[i] == 'R')
            {
                red.pb(a[i]);
            }
            else
            {
                blue.pb(a[i]);
            }
        }

        sort(all(red));
        sort(all(blue));

        ll itr1, itr2;
        itr1 = itr2 = 0;

        for (i = 1; i <= n; i++)
        {
            if (itr2 < blue.size() && blue[itr2] >= i)
            {
                itr2++;
            }
            else if (itr1 < red.size() && red[itr1] <= i)
            {
                itr1++;
            }
            else
            {
                break;
            }
        }

        if (i == n + 1)
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
