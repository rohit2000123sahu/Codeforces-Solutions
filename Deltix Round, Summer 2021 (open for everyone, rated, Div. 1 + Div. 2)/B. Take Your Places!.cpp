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

// Note we desgined this function for calculating the answer through odd parity we could also do it through even parity. Answer would we same in both cases.
ll setOdd(ll start, vector<ll> &vect)     // The function for calculating the cost through the Odd parity bit.
{
    ll ans = 0;
    ll i;
    ll n = vect.size();
    ll pos = start;

    for (i = 0; i < n; i++)
    {
        if (vect[i] % 2 != 0)
        {
            ans += abs(pos - i);
            pos += 2;
        }
    }

    return ans;
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
        vector<ll> vect;

        ll even = 0;
        ll odd = 0;

        for (i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            if (temp % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
            vect.pb(temp);
        }

        if (abs(even - odd) > 1)      // Case when it is impossible
        {
            cout << -1 << endl;
            continue;
        }

        if (even == odd)                        // If both are equal then we could either start from odd place or from even place
        {
            ll ans = setOdd(0, vect);           // Start from odd parity
            ans = min(ans, setOdd(1, vect));    // Start from even place
            cout << ans << endl;
        }
        else
        {
            if (even > odd)                   // Then we could only start with even parity hence odd parity start with 1 
            {
                cout << setOdd(1, vect) << endl;
            }
            else                             // Then we could only start with odd parity 
            {
                cout << setOdd(0, vect) << endl;
            }
        }
    }

    return 0;
}
