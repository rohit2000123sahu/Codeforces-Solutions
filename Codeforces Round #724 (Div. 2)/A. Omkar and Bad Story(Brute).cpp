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
        ll n;
        cin >> n;

        ll i;
        ll a[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        if (a[0] < 0)
        {
            cout << "NO" << endl;
            continue;
        }
      
        // According to the given constraints we can simply print all the numbers
        // If constraints we higher then above solution would work

        cout << "YES" << endl;

        cout << 101 << endl;

        for (i = 0; i <= 100; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}
