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
        ll n;
        cin >> n;

        ll a[n];
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool ans = false;

        ll diff = -1;
        ll c = -1;

        for (i = 0; i < n - 1; i++)
        {
            if (a[i] <= a[i + 1])
            {
                if (c == -1)
                {
                    c = a[i + 1] - a[i];
                }
                else
                {
                    if (c != a[i + 1] - a[i])
                    {
                        ans = true;
                        break;
                    }
                }
            }
            else if (a[i] > a[i + 1])
            {
                if (diff == -1)
                {
                    diff = a[i] - a[i + 1];
                }
                else
                {
                    if (diff != a[i] - a[i + 1])
                    {
                        ans = true;
                        break;
                    }
                }
            }
        }

        if (ans)
        {
            cout << -1 << endl;
        }
        else if (diff == -1)
        {
            cout << 0 << endl;
        }
        else
        {

            if (c == -1)
            {
                cout << 0 << endl;
                continue;
            }

            ll m = diff + c;
            ll new_a[n];

            // cout << m << c << endl;

            if (a[0] >= m)
            {
                cout << "-1" << endl;
                continue;
            }

            new_a[0] = a[0];

            for (i = 1; i < n; i++)
            {
                new_a[i] = new_a[i - 1] + c;
                new_a[i] %= m;

                if (new_a[i] != a[i])
                {
                    break;
                }
            }

            if (i == n)
            {
                cout << m << " " << c << endl;
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
