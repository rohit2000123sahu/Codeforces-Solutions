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
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll i, j;
        char mat[n][n];

        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                mat[i][j] = '.';
            }
        }

        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                for (j = 0; j < n; j++)
                {
                    mat[j][i] = '=';
                    mat[i][j] = '=';
                }
            }
        }

        for (i = 0; i < n; i++)
        {
            mat[i][i] = 'X';
        }

        bool flag = true;

        for (i = 0; i < n; i++)
        {
            if (s[i] == '2')
            {
                for (j = 0; j < n; j++)
                {
                    if (mat[i][j] == '.' && mat[j][i] == '.')
                    {
                        mat[i][j] = '+';
                        mat[j][i] = '-';
                        break;
                    }
                }
                if (j == n)
                {
                    flag = false;
                    break;
                }
            }
        }

        if (!flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            for (i = 0; i < n; i++)
            {
                for (j = 0; j < n; j++)
                {
                    if (mat[i][j] == '.')
                    {
                        cout << "=";
                    }
                    else
                    {
                        cout << mat[i][j];
                    }
                }
                cout << endl;
            }
        }
    }

    return 0;
}
