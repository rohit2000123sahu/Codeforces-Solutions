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
    string s;
    cin >> s;

    ll i;
    ll b = 0, r = 0;
    ll w_index = -1;
    for (i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            b++;
        }
        else if (s[i] == 'R')
        {
            r++;
        }
        else if (i >= 1 && s[i - 1] != 'W')     // If the prev char is not W then we will check that both r and b count should bre greater than 0 else that sequence is not possible
        {
            if (r == 0 || b == 0)
            {
                cout << "NO" << endl;
                return;
            }
            r = 0;
            b = 0;
        }
    }
    if (s[n - 1] != 'W')
    {
        if (r == 0 || b == 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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
