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

// The main concept behind this problem is when we took average of some numbers and if the numbers are different then definitely the average would be in between the 
// smaller and larger number hence we could always remove the maximum number from the array.
// Hence we could remove the maximum number from the array always and will stop only when minimum=average=maximum i.e. all numbers become equal

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

        ll a[n], i;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        sort(a, a + n);

        ll ele = a[0];

        ll count = 0;

        for (i = 0; i < n; i++)
        {
            if (ele == a[i])
            {
                count++;
            }
            else
            {
                break;
            }
        }

        cout << n - count << endl;
    }

    return 0;
}
