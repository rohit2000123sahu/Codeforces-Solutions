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

        vector<ll> vect;
        ll i;
        bool flag = true;

        string temp = s;
        sort(all(temp));

        for (i = 0; i < n; i++)
        {
            if (s[i] != temp[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 1 << endl;

            i = 0;
            ll j = n - 1;

            while (i < j)
            {
                if (s[i] == '1' && s[j] == '0')
                {
                    vect.pb(i + 1);
                    vect.pb(j + 1);
                    i++;
                    j--;
                }
                else if (s[i] == '0')
                {
                    i++;
                }
                else if (s[j] == '1')
                {
                    j--;
                }
            }

            sort(all(vect));

            cout << vect.size() << " ";

            for (auto c : vect)
            {
                cout << c << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
