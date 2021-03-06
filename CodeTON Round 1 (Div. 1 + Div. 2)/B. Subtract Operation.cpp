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

        vector<ll> vect(n);
        ll i, j;

        for (i = 0; i < n; i++)
        {
            cin >> vect[i];
        }

        sort(all(vect));
        bool ans = false;
        if (n == 1)
        {
            ans = (k == vect[0]);
        }
        else
        {
            i = 0;
            j = 1;
            while (j < n)
            {
                if (vect[j] - vect[i] == k)
                {
                    ans = true;
                    break;
                }
                else if (vect[j] - vect[i] < k)
                {
                    j++;
                }
                else
                {
                    i++;
                }

                if (i == j)
                {
                    j++;
                }
            }

            // cout << i << " " << j << endl;
        }

        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
