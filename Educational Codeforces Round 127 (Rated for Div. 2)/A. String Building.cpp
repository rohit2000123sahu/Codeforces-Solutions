#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve()
{
    string s;
    cin >> s;

    ll i;
    ll n = s.size();
    ll count = 1;
    // If we get the single occurace of any character then we cannot form it else we can form anything
    for (i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            count++;
        }
        else
        {
            if (count == 1)         // We cannot single char
            {
                cout << "NO" << endl;
                return;
            }
            else
            {
                count = 1;
            }
        }
    }

    if (count == 1)
    {
        cout << "NO" << endl;
        return;
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
