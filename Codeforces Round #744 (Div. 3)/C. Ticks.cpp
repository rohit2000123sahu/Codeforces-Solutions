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
        ll n, m, k;
        cin >> n >> m >> k;

        vector<string> mat;
        ll i, j;

        for (i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            mat.pb(temp);
        }

        bool visited[n][m];
        memset(visited, false, sizeof(visited));

        for (i = n - 1; i >= 0; i--)
        {
            for (j = m - 1; j >= 0; j--)
            {
                if (mat[i][j] == '*')
                {
                    ll i1 = i - 1;
                    ll j1 = j - 1;
                    ll j2 = j + 1;

                    ll count = 0;

                    while (i1 >= 0 && j1 >= 0 && j2 < m)
                    {
                        if (mat[i1][j1] == '*' && mat[i1][j2] == '*')
                        {
                            i1--;
                            j1--;
                            j2++;
                            count++;
                        }
                        else
                        {
                            break;
                        }
                    }

                    if (count >= k)
                    {
                        visited[i][j] = true;
                        i1 = i - 1;
                        j1 = j - 1;
                        j2 = j + 1;

                        count = 0;

                        while (i1 >= 0 && j1 >= 0 && j2 < m)
                        {
                            if (mat[i1][j1] == '*' && mat[i1][j2] == '*')
                            {
                                visited[i1][j1] = true;
                                visited[i1][j2] = true;
                                i1--;
                                j1--;
                                j2++;
                                count++;
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                }
            }
        }

        bool flag = true;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (mat[i][j] == '*' && !visited[i][j])
                {
                    flag = false;
                    break;
                }
            }

            if (!flag)
            {
                break;
            }
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
