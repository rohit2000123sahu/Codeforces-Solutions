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

ll minimum_dig(ll a, ll b)
{
    ll diff = 0;
    while (a > 0 && b > 0)
    {
        if (a % 10 != b % 10)
        {
            diff++;
        }
        a = a / 10;
        b = b / 10;
    }

    while (a > 0)
    {
        diff++;
        a = a / 10;
    }

    while (b > 0)
    {
        diff++;
        b = b / 10;
    }

    return diff;
}

ll digits(ll n)
{
    ll dig = 0;
    while (n > 0)
    {
        dig++;
        n = n / 10;
    }
    return dig;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;

    vector<ll> fac_7;

    ll i;

    for (i = 10; i <= 999; i++)
    {
        if (i % 7 == 0)
        {
            fac_7.push_back(i);
        }
    }

    while (t--)
    {
        ll n;
        cin >> n;

        if (n % 7 == 0)
        {
            cout << n << endl;
            continue;
        }

        ll ans = 4;
        ll ans_num = 7777;

        for (auto num : fac_7)
        {
            if (ans > minimum_dig(num, n) && digits(num) == digits(n))
            {
                ans = minimum_dig(num, n);
                ans_num = num;
            }
        }

        cout << ans_num << endl;
    }

    return 0;
}
