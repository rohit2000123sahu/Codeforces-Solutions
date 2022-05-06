#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve(map<string, int> &dict)
{
    string s;
    cin >> s;

    cout << dict[s] << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    map<string, int> dict;      // It is the dictionary that contains all the data
    ll index = 1;
    for (ll i = 0; i < 26; i++)
    {
        for (ll j = 0; j < 26; j++)
        {
            if (i == j)
            {
                continue;
            }
            string temp;
            temp += 'a' + i;
            temp += 'a' + j;
            dict[temp] = index;
            index++;
        }
    }

    ll t;
    cin >> t;
    while (t--)
    {
        solve(dict);
    }

    return 0;
}
