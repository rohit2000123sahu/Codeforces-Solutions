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

ll compute(ll a)
{
    if (a % 4 == 0)
    {
        return a;
    }
    else if (a % 4 == 1)
    {
        return 1;
    }
    else if (a % 4 == 2)
    {
        return a + 1;
    }
    else
    {
        return 0;
    }
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

        ll num = 0;

        num = compute(a - 1);

        if (num == b)
        {
            cout << a << endl;
        }
        else
        {
            ll temp = num ^ b;
            if (temp != a)
            {
                cout << a + 1 << endl;
            }
            else
            {
                cout << a + 2 << endl;
            }
        }
    }

    return 0;
}
