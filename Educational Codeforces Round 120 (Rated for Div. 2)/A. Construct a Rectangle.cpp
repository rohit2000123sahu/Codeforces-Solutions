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

bool sum(ll a, ll b, ll c)      // The sum of two sides equal to the last one
{
    if (a == b + c || b == a + c || c == a + b)
    {
        return true;
    }
    return false;
}

bool equal(ll a, ll b, ll c)    // The two sides are equal and the third one is even.
{
    if (a == b && c % 2 == 0)
    {
        return true;
    }
    else if (b == c && a % 2 == 0)
    {
        return true;
    }
    else if (a == c && b % 2 == 0)
    {
        return true;
    }
    return false;
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
        ll a, b, c;
        cin >> a >> b >> c;

        if (sum(a, b, c) || equal(a, b, c))    
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
