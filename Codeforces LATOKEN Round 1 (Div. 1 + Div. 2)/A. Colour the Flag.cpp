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

    ll T;
    cin >> T;

    while (T--)
    {
        ll n, m;
        cin >> n >> m;

        char mat[n][m];
        ll i, j;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }

        ll red = -1, white = -1;
        bool flag = true;

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (red == -1 && mat[i][j] == 'R')
                {
                    red = (i + j) % 2;
                }
                else if (white == -1 && mat[i][j] == 'W')
                {
                    white = (i + j) % 2;
                }
            }
        }

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (mat[i][j] == 'R')
                {
                    if (red != (i + j) % 2)
                    {
                        flag = false;
                        break;
                    }
                }
                else if (mat[i][j] == 'W')
                {
                    if (white != (i + j) % 2)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (!flag)
            {
                break;
            }
        }

        if (red == -1 && white == -1)
        {
            red = 0;
            white = 1;
        }
        else if (red == -1)
        {
            red = (white + 1) % 2;
        }
        else if (white == -1)
        {
            white = (red + 1) % 2;
        }

        if (red == white)
        {
            flag = false;
        }

        if (flag)
        {
            cout << "YES" << endl;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < m; j++)
                {
                    if (red == (i + j) % 2)
                    {
                        cout << 'R';
                    }

                    if (white == (i + j) % 2)
                    {
                        cout << "W";
                    }
                }
                cout << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
