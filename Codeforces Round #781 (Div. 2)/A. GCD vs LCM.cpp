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
    // We have always taken LCM numbers as 1 and 1
    if (n % 2 == 0)     // if it is even then this could be our answer so that gcd of two odd numbers is always 1
    {
        cout << n - 3 << " " << 1 << " " << 1 << " " << 1 << endl;
    }
    else        // Else we can go for the below answer
    {
        cout << (n - 2) / 2 << " " << (n - 2) / 2 + 1 << " " << 1 << " " << 1 << endl;
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
