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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;
  
    // We will use one logic here if x is superior to y and y is superior to z then z will be superior to z also.
    // It is because according to the definition given in problem out of 5, 3 should be smaller.

    while (T--)
    {
        ll n;
        cin >> n;

        ll i;
        ll r[n][5];
        for (i = 0; i < n; i++)
        {
            for (ll j = 0; j < 5; j++)
            {
                cin >> r[i][j];
            }
        }

        ll index = 0;   // Assume the answer is 0

        for (i = 1; i < n; i++) 
        {
            ll count = 0;
            for (ll j = 0; j < 5; j++)      // Comparing i and index
            {
                if (r[i][j] < r[index][j])
                {
                    count++;
                }
            }
            if (count >= 3)               // If count is greater than 3 then update the index
            {
                index = i;
            }
        }

        for (i = 0; i < n; i++)       // The index we got will verify again so that it is satisfying for all
        {
            ll count = 0;
            for (ll j = 0; j < 5; j++)
            {
                if (r[i][j] < r[index][j])
                {
                    count++;
                }
            }
            if (count >= 3)
            {
                break;
            }
        }

        if (i == n)               // If i is equal to n hence loop is not breaked and answer is index+1
        {
            cout << index + 1 << endl;
        }
        else                    // Else answer is not possible
        {
            cout << -1 << endl;
        }
    }

    return 0;
}
