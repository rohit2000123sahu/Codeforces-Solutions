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

        ll x[n];
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> x[i];
        }

        vl vect;
        ll num = x[0];
        vect.pb(0);

        i = 1;
        while (i < n)
        {
            ll temp1 = num;
            ll temp2 = x[i];
            ll y = 0;
            ll power = 1;
            while (temp1 > 0)
            {
                // cout << temp1 << endl;
                // cout << temp2 << endl;
                if (temp1 & 1)
                {
                    if (temp2 & 1)
                    {
                        power = power * 2;
                    }
                    else
                    {
                        y += power;
                        power = power * 2;
                    }
                }
                else
                {
                    power = power * 2;
                }
                temp1 = temp1 >> 1;
                temp2 = temp2 >> 1;
            }

            num = x[i] ^ y;
            i++;
            vect.pb(y);
        }

        for (auto c : vect)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
