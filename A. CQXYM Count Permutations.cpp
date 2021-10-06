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

ll fact[200005];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll i;
    fact[2] = 1;

    for (i = 3; i <= 200001; i++)
    {
        fact[i] = fact[i - 1] * i;
        fact[i] %= MOD;
    }

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        cout << fact[2 * n] << endl;
    }

    return 0;
}
