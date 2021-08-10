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

    while (T--)
    {
        ll n, k;
        cin >> n >> k;

        ll i;
        ll a[n];
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vl vect;
        for (i = 0; i < n; i++)
        {
            vect.pb(a[i]);
        }

        sort(all(vect));

        map<ll, ll> m;
        for (i = 0; i < n - 1; i++)
        {
            m[vect[i]] = vect[i + 1];
        }

        m[vect[n - 1]] = vect[n - 1];

        ll count = 0;

        // Here we will put the data togther that should be there in the sorted array.
        // We will get to know that data using map and sorting that we done above
        // Using this we will try to find the minimum count value.
        
        i = 1;
        while (i < n)
        {
            if (a[i] == m[a[i - 1]])
            {
                i++;
            }
            else
            {
                count++;
                i++;
            }
        }

        // cout << count << endl;

        count++;

        if (count <= k)               // If it is less than the value of k then answer is yes else no
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
