#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ll n, m;
    cin >> n >> m;

    vector<string> mat(n);
    ll i;

    for (i = 0; i < n; i++)
    {
        cin >> mat[i];
    }

    for (ll j = 0; j < m; j++)
    {
        ll prev = n - 1;
        for (i = n - 1; i >= 0; i--)
        {
            if (mat[i][j] == 'o')
            {
                prev = i - 1;
            }
            else if (mat[i][j] == '*')
            {
                swap(mat[prev][j], mat[i][j]);
                prev--;
            }
        }
    }

    for (auto c : mat)
    {
        cout << c << endl;
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
