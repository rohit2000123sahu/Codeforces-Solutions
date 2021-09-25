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

        string s1;
        string s2;
        cin >> s1 >> s2;

        ll i;
        ll ans = 0;

        i = 0;
        while (i < n - 1)
        {
            if (s1[i] == '0' && s1[i + 1] == '1' && s2[i] == '0' && s2[i + 1] == '1')
            {
                ans += 2;
                s1[i] = 'X';
                s1[i + 1] = 'X';
                s2[i] = 'X';
                s2[i + 1] = 'X';
                i += 2;
            }
            else if (s1[i] == '1' && s1[i + 1] == '0' && s2[i] == '1' && s2[i + 1] == '0')
            {

                ans += 2;
                s1[i] = 'X';
                s1[i + 1] = 'X';
                s2[i] = 'X';
                s2[i + 1] = 'X';
                i += 2;
            }
            else
            {
                i++;
            }
        }

        // cout << s1 << " " << s2 << endl;

        // cout << ans << endl;
        for (i = 0; i < n; i++)
        {
            if (s1[i] == '1' && s2[i] == '0')
            {
                ans += 2;
            }
            else if (s2[i] == '1' && s1[i] == '0')
            {
                ans += 2;
            }
            else if (s1[i] == '0' && s2[i] == '0')
            {
                ans += 1;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
