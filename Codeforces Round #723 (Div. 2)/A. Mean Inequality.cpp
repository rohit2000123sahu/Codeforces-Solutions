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

// In this problem we will arrrange the numbers in the fashion such that the left and right both of the number will be either greater than it or smaller than it.
// In this way the median of their will never be equal to that number.
// Fot this we have sorted the array

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

        ll a[2 * n];

        ll i;

        for (i = 0; i < 2 * n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + 2 * n);

        ll ans[2 * n];

        ll j;
        j = 0;
        i = n;

        while (j < 2 * n && i < 2 * n)
        {
            ans[j] = a[i];
            j += 2;
            i++;
        }

        j = 1;
        i = 0;
        while (j < 2 * n && i < 2 * n)
        {
            ans[j] = a[i];
            i++;
            j += 2;
        }

        for (i = 0; i < 2 * n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
