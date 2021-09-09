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

ll conv(string s)
{
    ll n = 0;
    ll i = 0;
    for (i = 0; i < s.size(); i++)
    {
        n = n * 10 + s[i] - '0';
    }

    return n;
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
        string s;
        cin >> s;

        string sa, sb;
        ll i = 0;
        ;

        ll n = s.size();

        for (i = 0; i < n; i++)
        {
            if (i % 2)
            {
                sa += s[i];
            }
            else
            {
                sb += s[i];
            }
        }

        ll a = conv(sa);
        ll b = conv(sb);

        if (a == 0)
        {
            cout << b - 1 << endl;
        }
        else
        {
            cout << (a + 1) * (b + 1) - 2 << endl;
        }

        // cout << a << " " << b << endl;
    }

    return 0;
}
