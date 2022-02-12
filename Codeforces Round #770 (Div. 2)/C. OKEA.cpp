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
        int n, k;
        cin >> n >> k;
        int odd = (n * k + 1) / 2;
        int even = (n * k) / 2;
        if (odd % k != 0 || even % k != 0)
        {
            cout << "NO" << '\n';
            continue;
        }
        cout << "YES" << '\n';
        for (int i = 1; i <= odd; i += k)
        {
            for (int j = 0; j < k; j++)
            {
                cout << ((i + j) * 2 - 1) << ' ';
                ;
            }
            cout << '\n';
        }
        for (int i = 1; i <= even; i += k)
        {
            for (int j = 0; j < k; j++)
            {
                cout << ((i + j) * 2) << ' ';
                ;
            }
            cout << '\n';
        }
    }

    return 0;
}
