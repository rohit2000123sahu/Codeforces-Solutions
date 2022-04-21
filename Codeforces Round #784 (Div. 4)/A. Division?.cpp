#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ll rating;
    cin >> rating;

    if (rating >= 1900)
    {
        cout << "Division 1" << endl;
    }
    else if (rating >= 1600)
    {
        cout << "Division 2" << endl;
    }
    else if (rating >= 1400)
    {
        cout << "Division 3" << endl;
    }
    else
    {
        cout << "Division 4" << endl;
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
