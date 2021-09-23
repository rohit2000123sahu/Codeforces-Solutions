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
        vector<ll> vect;
        ll i;
        for (i = 0; i < 3; i++)
        {
            ll temp;
            cin >> temp;
            vect.pb(temp);
        }

        ll a, b, c;
        sort(all(vect), greater<ll>());

        a = vect[0];
        b = vect[1];
        c = vect[2];

        ll m;
        cin >> m;

        if (a + b + c - 3 < m)
        {
            cout << "NO" << endl;
        }
        else if (m >= a - (b + c + 1))
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
