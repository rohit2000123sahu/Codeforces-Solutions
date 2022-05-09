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

    if (t == "a")               // If we will replace a by a no new string will be made
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
        if (count_a != 0)       //If count of a is not zero then we will get infinite number of strings
        {
            cout << "-1" << endl;
        }
        else                    // Else answer is 2^(len of string)
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
