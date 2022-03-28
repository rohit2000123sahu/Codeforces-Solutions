#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

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

        vector<pair<ll, ll>> vect(n);
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> vect[i].first;
            vect[i].second = i + 1;
        }

        sort(all(vect));

        cout << vect[0].second << " " << vect[n - 1].second << endl;
    }

    return 0;
}
