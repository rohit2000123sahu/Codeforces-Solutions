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

        vector<string> vect(n - 2);

        ll i;

        for (i = 0; i < n - 2; i++)
        {
            cin >> vect[i];
        }

        string ans;
        ans += vect[0][0];

        bool flag = true;

        for (i = 1; i < n - 2; i++)
        {
            if (vect[i - 1][1] == vect[i][0])
            {
                ans += vect[i][0];
            }
            else
            {
                ans += vect[i - 1][1];
                ans += vect[i][0];
                flag = false;
            }
        }

        ans += vect[n - 3][1];

        if (flag)
        {
            ans += 'a';
        }

        cout << ans << endl;
    }

    return 0;
}
