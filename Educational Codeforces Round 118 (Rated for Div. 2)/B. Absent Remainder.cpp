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

        ll mini = *min_element(all(vect));

        ll count = 0;
        for (i = 0; i < n; i++)
        {
            if (count >= n / 2)
            {
                break;
            }
            if (vect[i] != mini)
            {
                cout << vect[i] << " " << mini << endl;
                count++;
            }
        }
    }

    return 0;
}
