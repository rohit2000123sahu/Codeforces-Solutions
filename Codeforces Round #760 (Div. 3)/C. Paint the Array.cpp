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

ll check(vl vect, ll index)
{
    ll n = vect.size();
    ll gcd = 0;

    ll i;

    for (i = index; i < n; i = i + 2)
    {
        gcd = __gcd(gcd, vect[i]);
    }

    if (gcd == 1)
    {
        return 0;
    }

    ll start;
    if (index % 2 == 0)
    {
        start = 1;
    }
    else
    {
        start = 0;
    }

    for (i = start; i < n; i = i + 2)
    {
        if (vect[i] % gcd == 0)
        {
            return 0;
        }
    }

    return gcd;
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
        ll n;
        cin >> n;

        vl vect(n);
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> vect[i];
        }

        ll d1 = check(vect, 0);
        ll d2 = check(vect, 1);

        if (d1)
        {
            cout << d1 << endl;
        }
        else if (d2)
        {
            cout << d2 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
