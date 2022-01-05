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
        ll n, k;
        cin >> n >> k;

        char mat[n][n];
        ll i, j;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                mat[i][j] = '.';
            }
        }

        ll x = 0;
        ll y = 0;
        
        // We will just start from begining and will move +2 in x and +2 in y 

        while (x < n && y < n && k > 0)
        {
            mat[x][y] = 'R';
            x = x + 2;
            y = y + 2;
            k--;
        }

        if (k > 0)
        {
            cout << -1 << endl;
        }
        else
        {
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    cout << mat[i][j];
                }
                cout << endl;
            }
        }
    }

    return 0;
}
