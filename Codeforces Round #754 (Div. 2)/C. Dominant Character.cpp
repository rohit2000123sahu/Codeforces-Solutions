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

        for (i = 1; i < n; i++)
        {
            if (s[i] == 'a' && s[i - 1] == 'a')
            {
                break;
            }
        }

        if (i != n)
        {
            cout << 2 << endl;
        }
        else
        {
            for (i = 2; i < n; i++)
            {
                if (s[i] == 'a' && s[i - 2] == 'a')
                {
                    break;
                }
            }

            if (i >= n)
            {
                for (i = 3; i < n; i++)
                {
                    if (s[i] == 'a' && s[i - 3] == 'a' && s[i - 1] != s[i - 2])
                    {
                        break;
                    }
                }
                if (i >= n)
                {
                    for (i = 6; i < n; i++)
                    {
                        if (s[i] == 'a' && s[i - 3] == 'a' && s[i - 6] == 'a' && s[i-2]!=s[i-5])
                        {
                            break;
                        }
                    }
                    if (i >= n)
                    {
                        cout << -1 << endl;
                    }
                    else
                    {
                        cout << 7 << endl;
                    }
                }
                else
                {
                    cout << 4 << endl;
                }
            }
            else
            {
                cout << 3 << endl;
            }
        }
    }

    return 0;
}
