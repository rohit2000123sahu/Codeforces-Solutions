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

        ll i, j;

        vector<vector<ll>> vect;

        for (i = 0; i < n; i++)
        {
            vl temp;
            for (j = 0; j < 5; j++)
            {
                ll val;
                cin >> val;
                temp.pb(val);
            }
            vect.pb(temp);
        }

        bool flag = false;
        for (i = 0; i < 5; i++)
        {
            for (j = i + 1; j < 5; j++)
            {
                ll k;
                ll first = 0;
                ll second = 0;
                ll both = 0;
                for (k = 0; k < n; k++)
                {
                    if (vect[k][i] == 1 && vect[k][j] == 1)
                    {
                        both++;
                    }
                    else if (vect[k][i] == 1)
                    {
                        first++;
                    }
                    else if (vect[k][j] == 1)
                    {
                        second++;
                    }
                }

                if (first >= n / 2 && second >= n / 2)
                {
                    flag = true;
                    break;
                }
                else if (first >= n / 2 && second + both >= n / 2)
                {
                    flag = true;
                    break;
                }
                else if (second >= n / 2 && first + both >= n / 2)
                {
                    flag = true;
                    break;
                }
                else if (first < n / 2 && second < n / 2 && first + second + both >= n)
                {
                    flag = true;
                    break;
                }
            }
            if (flag)
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
