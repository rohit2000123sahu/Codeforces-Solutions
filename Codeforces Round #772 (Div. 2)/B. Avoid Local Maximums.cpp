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

        vector<ll> vect(n);
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> vect[i];
        }

        ll ans = 0;
      
        // We will always set vect[i+1] in optimal case.

        for (i = 1; i < n - 1; i++)
        {
            if (vect[i] > vect[i - 1] && vect[i] > vect[i + 1])
            {
                if (i + 2 < n && vect[i + 2] >= vect[i])
                {
                    vect[i + 1] = vect[i + 2];
                    ans++;
                }
                else
                {
                    ans++;
                    vect[i + 1] = vect[i];
                }
            }
        }

        cout << ans << endl;
        for (auto c : vect)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
