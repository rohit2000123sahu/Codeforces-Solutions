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
        string s, t;
        cin >> s >> t;

        ll i;
        ll n = s.size();
        bool present[3];
        memset(present, false, sizeof(present));
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                present[0] = true;
            }
            else if (s[i] == 'b')
            {
                present[1] = true;
            }
            else if (s[i] == 'c')
            {
                present[2] = true;
            }
        }

        if (present[0] && present[1] && present[2])
        {
            string temp = t;
            sort(temp.begin(), temp.end());
            bool flag = false;
            if (temp == t)
            {
                swap(temp[1], temp[2]);
                flag = true;
            }

            ll count[26] = {0};

            for (i = 0; i < n; i++)
            {
                count[s[i] - 'a']++;
            }

            if (flag)
            {
                string ans;
                while (count[0] > 0)
                {
                    ans += 'a';
                    count[0]--;
                }
                while (count[2] > 0)
                {
                    ans += 'c';
                    count[2]--;
                }
                for (i = 1; i < 26; i++)
                {
                    while (count[i] > 0)
                    {
                        ans += ('a' + i);
                        count[i]--;
                    }
                }
                cout << ans << endl;
            }
            else
            {
                sort(s.begin(), s.end());
                cout << s << endl;
            }
        }
        else
        {
            sort(s.begin(), s.end());
            cout << s << endl;
        }
    }

    return 0;
}
