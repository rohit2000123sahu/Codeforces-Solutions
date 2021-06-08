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

        if ((n - 1) / 2 < k)
        {
            cout << -1 << endl;
            continue;
        }

        ll per[n] = {0};

        ll i = 1;
        ll count = 0;
        ll num = n;

        while (i < n && count < k)
        {
            per[i] = num;
            i += 2;
            num--;
            count++;
        }

        for (i = 0; i < n; i++)
        {
            if (per[i] == 0)
            {
                per[i] = num;
                num--;
            }
        }

        for (i = 0; i < n; i++)
        {
            cout << per[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
