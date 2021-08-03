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

ll h, w;
ll mat[20][20];

bool isSafe(ll i, ll j)
{
    if (i >= 0 && i < h && j >= 0 && j < w && mat[i][j] == 1)
    {
        return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    //Simple brute force
    while (T--)
    {
        cin >> h >> w;
        memset(mat, 0, sizeof(mat));

        ll row[] = {-1, 0, 1, 0, -1, -1, 1, 1};
        ll col[] = {0, -1, 0, 1, -1, 1, -1, 1};

        ll i, j, k;

        i = 0;
        for (j = 0; j < w; j++)
        { //First row;
            for (k = 0; k < 8; k++)
            {
                if (!isSafe(i + row[k], j + col[k]))
                {
                    break;
                }
            }

            if (k == 8)
            {
                mat[i][j] = 1;
            }
        }

        j = w - 1;
        for (i = 0; i < h; i++)
        { // Last column
            for (k = 0; k < 8; k++)
            {
                if (!isSafe(i + row[k], j + col[k]))
                {
                    break;
                }
            }

            if (k == 8)
            {
                mat[i][j] = 1;
            }
        }

        i = h - 1; // Last row
        for (j = 0; j < w; j++)
        {
            for (k = 0; k < 8; k++)
            {
                if (!isSafe(i + row[k], j + col[k]))
                {
                    break;
                }
            }

            if (k == 8)
            {
                mat[i][j] = 1;
            }
        }

        j = 0; // First column
        for (i = 0; i < h; i++)
        {
            for (k = 0; k < 8; k++)
            {
                if (!isSafe(i + row[k], j + col[k]))
                {
                    break;
                }
            }

            if (k == 8)
            {
                mat[i][j] = 1;
            }
        }

        for (i = 0; i < h; i++)
        {
            for (j = 0; j < w; j++)
            {
                cout << mat[i][j];
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
