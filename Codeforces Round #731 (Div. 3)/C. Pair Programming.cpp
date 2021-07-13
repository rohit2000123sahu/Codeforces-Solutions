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
    cin >> T;

    while (T--)
    {
        ll k, n, m;
        cin >> k >> n >> m;

        ll a[n];
        ll b[m];
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        ll j;
        i = 0;
        j = 0;

        vl vect;

        bool flag = false;

        while (i < n && j < m)
        {
            if (a[i] == 0)
            {
                k++;
                i++;
                vect.pb(0);
            }
            else if (b[j] == 0)
            {
                k++;
                j++;
                vect.pb(0);
            }
            else if (a[i] <= k)
            {
                vect.pb(a[i]);
                i++;
            }
            else if (b[j] <= k)
            {
                vect.pb(b[j]);
                j++;
            }
            else
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << -1 << endl;
            continue;
        }

        while (i < n)
        {
            if (a[i] == 0)
            {
                k++;
                i++;
                vect.pb(0);
            }
            else if (a[i] <= k)
            {
                vect.pb(a[i]);
                i++;
            }
            else
            {
                flag = true;
                break;
            }
        }

        while (j < m)
        {
            if (b[j] == 0)
            {
                k++;
                j++;
                vect.pb(0);
            }
            else if (b[j] <= k)
            {
                vect.pb(b[j]);
                j++;
            }
            else
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << -1 << endl;
        }
        else
        {
            for (auto c : vect)
            {
                cout << c << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
