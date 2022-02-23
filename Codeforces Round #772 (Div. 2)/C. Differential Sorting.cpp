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

        vl new_vect = vect;
        sort(new_vect.begin(), new_vect.end());

        if (new_vect == vect)
        {
            cout << 0 << endl;
        }
        else
        {
            if (vect[n - 2] > vect[n - 1])
            {
                cout << -1 << endl;
            }
            else if (vect[n - 1] >= 0)
            {
                cout << n - 2 << endl;
                for (i = 0; i < n - 2; i++)
                {
                    cout << i + 1 << " " << n - 1 << " " << n << endl;
                }
            }
            else
            {
                cout << -1 << endl;
            }
        }
    }

    return 0;
}
