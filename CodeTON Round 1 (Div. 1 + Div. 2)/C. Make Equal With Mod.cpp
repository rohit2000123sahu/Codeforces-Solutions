#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ll n;
    cin >> n;

    vector<ll> vect(n);
    ll i;

    for (i = 0; i < n; i++)
    {
        cin >> vect[i];
    }

    bool one_present = false;
    bool difference_one = false;

    sort(vect.begin(), vect.end());

    for (i = 0; i < n - 1; i++)
    {
        if (vect[i] == 1)
        {
            one_present = true;
        }
        if (vect[i + 1] - vect[i] == 1)
        {
            difference_one = true;
        }
    }

    if (!one_present)
    {
        cout << "YES" << endl;
    }
    else if (!difference_one)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
