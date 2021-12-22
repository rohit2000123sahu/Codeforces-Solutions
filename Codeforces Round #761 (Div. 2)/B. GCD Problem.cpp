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

        if ((n - 1) % 2 != 0)
        {
            cout << n - 3 << " " << 2 << " " << 1 << endl;
        }
        else
        {
            ll arr[] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
            for (auto c : arr)
            {
                if ((n - 1 - c) % c != 0)
                {
                    cout << n - 1 - c << " " << c << " " << 1 << endl;
                    break;
                }
            }
        }
    }

    return 0;
}
