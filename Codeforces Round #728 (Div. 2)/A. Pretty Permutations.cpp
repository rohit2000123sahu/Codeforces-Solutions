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

        ll ans[n + 1];    

        ll i;
        for (i = 1; i <= n; i++)
        {
            ans[i] = i;
        }

        for (i = 1; i < n; i = i + 2)       // Just swap the adjacent numbers
        {
            swap(ans[i], ans[i + 1]);
        }

        if (n % 2 != 0)                    // If the length is odd then we need one more replacement of last and second last element after replacement
        {
            swap(ans[n], ans[n - 2]);
        }

        for (i = 1; i <= n; i++)          // Finally printing the answer
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
