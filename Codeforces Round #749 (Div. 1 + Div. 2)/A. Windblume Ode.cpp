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

bool isPrime(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
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
        ll n;
        cin >> n;
        ll i;
        ll a[n];
        ll odd, even;
        odd = even = 0;
        ll sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (isPrime(sum))       // If sum is prime then we fill find the index of odd element and we will remove it
        {
            ll index = -1;
            for (i = 0; i < n; i++)
            {
                if (a[i] % 2 != 0)
                {
                    index = i;
                    break;
                }
            }

            cout << n - 1 << endl;
            for (i = 0; i < n; i++)
            {
                if (i == index)
                {
                    continue;
                }
                else
                {
                    cout << i + 1 << " ";
                }
            }
            cout << endl;
        }
        else        // If sum is not prime then print all as our final answer
        {
            cout << n << endl;
            for (i = 0; i < n; i++)
            {
                cout << i + 1 << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
