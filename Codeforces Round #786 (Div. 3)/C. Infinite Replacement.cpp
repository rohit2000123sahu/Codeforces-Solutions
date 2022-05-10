#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

ll power(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll temp = power(a, b / 2);
    ll ans = temp * temp;
    if (b % 2 == 0)
    {
        return ans;
    }
    else
    {
        ans = ans * a;
        return ans;
    }
}


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
            cout << power(2, s.size()) << endl;
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
