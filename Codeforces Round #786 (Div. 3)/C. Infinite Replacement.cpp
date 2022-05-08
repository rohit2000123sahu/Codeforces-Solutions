#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve()
{
    string s, t;
    cin >> s >> t;

    if (t == "a")
    {
        cout << 1 << endl;
    }
    else
    {
        ll count_a = 0;
        for (auto c : t)
        {
            if (c == 'a')
            {
                count_a++;
            }
        }
        if (count_a != 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            cout << (1 << s.size()) << endl;
        }
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
