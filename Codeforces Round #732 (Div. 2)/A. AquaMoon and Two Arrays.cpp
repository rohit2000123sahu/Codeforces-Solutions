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

        ll a[n], b[n];

        ll i;

        ll sum1 = 0, sum2 = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum1 += a[i];
        }

        for (i = 0; i < n; i++)
        {
            cin >> b[i];
            sum2 += b[i];
        }

        if (sum1 != sum2)           //Base Condition
        {
            cout << -1 << endl;
            continue;
        }

        i = 0;
        ll j = 0;

        vpl vect;
        
        //Use two pointer

        while (i < n && j < n)
        {
            if (a[i] > b[i])
            {
                while (j < n)
                {
                    if (a[j] < b[j])
                    {
                        break;
                    }
                    else
                    {
                        j++;
                    }
                }
                vect.pb(mp(i + 1, j + 1));
                a[i]--;
                a[j]++;
            }
            else
            {
                i++;
            }
        }

        cout << vect.size() << endl;

        for (auto c : vect)
        {
            cout << c.F << " " << c.S << endl;
        }
    }

    return 0;
}
