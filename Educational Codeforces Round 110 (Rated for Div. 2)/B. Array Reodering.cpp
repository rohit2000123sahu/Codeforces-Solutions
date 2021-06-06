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

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

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

        vl odd, even;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even.pb(a[i]);
            }
            else
            {
                odd.pb(a[i]);
            }
        }

        sort(all(even), greater<ll>());
        sort(all(odd), greater<ll>());

        i = 0;
        for (auto c : even)
        {
            a[i] = c;
            i++;
        }
        for (auto c : odd)
        {
            a[i] = c;
            i++;
        }

        // for (i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;

        ll j;
        ll count = 0;

        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (gcd(a[i], 2 * a[j]) > 1)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }
}
