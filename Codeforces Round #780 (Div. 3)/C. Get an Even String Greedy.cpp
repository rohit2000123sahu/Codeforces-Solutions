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

    ll n = s.size();
    bool present[26];
    memset(present, false, sizeof(present));

    ll pairs_formed = 0;
    for (ll i = 0; i < n; i++)
    {
        ll alpha = s[i] - 'a';
        if (present[alpha] == false)
        {
            present[alpha] = true;
        }
        else
        {
            pairs_formed++;
            for (ll j = 0; j < 26; j++)
            {
                present[j] = false;
            }
        }
    }

    cout << n - 2 * pairs_formed << endl;
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
