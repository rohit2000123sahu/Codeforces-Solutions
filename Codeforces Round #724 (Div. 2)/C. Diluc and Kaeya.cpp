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

pl reduceRatio(ll a, ll b)      // This will convert the a:b to its reduced form
{
    ll gcd = __gcd(a, b);
    return {a / gcd, b / gcd};
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

        string s;
        cin >> s;

        map<pl, ll> m;

        ll d, k;
        d = k = 0;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'D')
            {
                d++;
            }
            else
            {
                k++;
            }
            cout << ++m[reduceRatio(d, k)] << " ";
        }
        cout << endl;
    }
}
