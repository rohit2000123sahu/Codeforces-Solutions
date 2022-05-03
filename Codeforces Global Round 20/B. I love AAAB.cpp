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

    ll count_a = 0;
    ll count_b = 0;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            count_b++;
            if (count_a < count_b)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            count_a++;
        }
    }
    if (s[s.size() - 1] != 'B')
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
