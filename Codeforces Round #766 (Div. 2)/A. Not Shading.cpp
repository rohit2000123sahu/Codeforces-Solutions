#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
typedef unordered_map<ll, ll> uml;
typedef vector<pl> vpl;
typedef map<ll, ll> ml;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;

        ll r, c;
        cin >> r >> c;

        vector<string> mat(n);
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> mat[i];
        }

        if (mat[r - 1][c - 1] == 'B')
        {
            cout << 0 << endl;
            continue;
        }

        bool black = false;
        for (i = 0; i < n; i++)
        {
            for (ll j = 0; j < m; j++)
            {
                if (mat[i][j] == 'B')
                {
                    black = true;
                    break;
                }
            }
        }

        if (!black)
        {
            cout << -1 << endl;
            continue;
        }

        bool col = false;
        bool row = false;
        for (i = 0; i < n; i++)
        {
            if (mat[i][c - 1] == 'B')
            {
                col = true;
                break;
            }
        }

        for (i = 0; i < m; i++)
        {
            if (mat[r - 1][i] == 'B')
            {
                row = true;
                break;
            }
        }

        if (row || col)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }

    return 0;
}
