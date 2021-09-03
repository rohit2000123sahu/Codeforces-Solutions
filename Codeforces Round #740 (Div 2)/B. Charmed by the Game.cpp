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

bool check(ll a[], ll n)
{
    ll i;
    for (i = 1; i <= n; i++)
    {
        if (a[i] != i)
        {
            return false;
        }
    }

    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        ll n = a + b;

        ll d = abs(a - b) / 2;
        ll i;
        vl vect;
        if (n % 2 == 0)
        {
            i = d;
            while (i <= a + b - d)
            {
                vect.pb(i);
                i = i + 2;
            }
        }
        else
        {
            i = d;
            while (i <= a + b - d)
            {
                vect.pb(i);
                i = i + 1;
            }
        }

        cout << vect.size() << endl;

        for (auto c : vect)
        {
            cout << c << " ";
        }

        cout << endl;
    }

    return 0;
}
