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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vl vect(n);
        ll i;
        for (i = 0; i < n; i++)
        {
            cin >> vect[i];
        }

        ll size = 1;
        ll cnt = 0;
        // Simple brute force
        for (i = 0; i < n; i++)
        {
            if (vect[i] == 1 && i > 0 && vect[i - 1] == 1)
            {
                size += 5;
                cnt = 0;
            }
            else if (vect[i] == 1)
            {
                size += 1;
                cnt = 0;
            }
            else            // if it zero then increase the count by 1
            {
                cnt += 1;
            }

            if (cnt == 2)  // if count becomes 2 then it become dead according to the conditions
            {
                size = -1;
                break;
            }
        }

        cout << size << endl;
    }

    return 0;
}
