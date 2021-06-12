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
        ll n, i;
        cin >> n;

        ll a[n];
        ll sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
        }

        if (sum % n != 0)
        {
            cout << -1 << endl;
            continue;
        }

        ll final_candy = sum / n;
        ll req = 0;

        for (i = 0; i < n; i++)
        {
            if (a[i] < final_candy)
            {
                req += final_candy - a[i];
            }
        }

        sort(a, a + n, greater<ll>());

        sum = 0;

        // cout << req << endl;

        for (i = 0; i < n; i++)
        {
            if (sum >= req)
            {
                break;
            }
            sum += a[i] - final_candy;
        }

        cout << i << endl;
    }

    return 0;
}
