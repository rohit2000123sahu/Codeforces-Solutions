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

void printFactors(ll n)
{
    for (ll i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << endl;
    return;
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
        ll i;
        ll a[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        
        // Main Idea is that we will count the set bit at each index in each and every number and store it in a map.
        // Then we will do the gcd of all those count values.
        // Reason is that because one decrement operation will remove the same set bits from all the kth numbers. 
        // Then finally print the factors of the answer we got.
        // Also try to explore the problem to get the exact logic behind it :)
      
        map<ll, ll> m;
        for (i = 0; i < n; i++)
        {
            ll num = a[i];
            ll index = 0;
            while (num)
            {
                if (num & 1)
                {
                    m[index]++;
                }
                num = num >> 1;
                index++;
            }
        }

        ll ans = 0;
        for (auto c : m)
        {
            ans = __gcd(ans, c.second);
        }

        if (ans == 0)
        {
            for (i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            printFactors(ans);
        }
    }

    return 0;
}
