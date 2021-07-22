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

        vector<string> vect;
        ll i;

        ll a[26] = {0};

        for (i = 0; i < n; i++)
        {
            string temp;
            cin >> temp;
            vect.pb(temp);

            for (auto c : temp)
            {
                a[c - 'a']++;
            }
        }

        for (i = 0; i < n - 1; i++)
        {
            string temp;
            cin >> temp;
            for (auto c : temp)
            {
                a[c - 'a']--;
            }
        }

        string ans = "";
        i = 0;
        while (i < 26)
        {
            if (a[i] <= 0)
            {
                i++;
            }
            else
            {
                ans += i + 'a';
                a[i]--;
            }
        }

        // cout << ans << endl;

        for (i = 0; i < n; i++)
        {
            string temp = vect[i];
            sort(all(temp));
            if (temp == ans)
            {
                cout << vect[i] << endl;
                break;
            }
        }

        // cout << 1 << endl;
        cout.flush();
    }

    return 0;
}
