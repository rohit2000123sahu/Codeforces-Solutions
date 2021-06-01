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
        ll n;
        ll m;
        cin >> n >> m;
        string s;
        cin >> s;

        vl vect;

        ll prev = -1;

        for (ll i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                vect.pb(i);
            }
        }

        for (auto i : vect)
        {
            if (s[i] != '1')
            {
                continue;
            }

            if (prev == -1)
            {
                ll start = i - 1;
                ll count = 0;
                while (start >= 0 && count < m)
                {
                    if (s[start] == '1')
                    {
                        break;
                    }
                    s[start] = '1';
                    count++;
                    start--;
                }
            }
            else
            {
                ll start = i - 1;
                ll finish = prev + 1;

                ll count = 0;

                while (count < m && start > finish)
                {
                    bool flag1 = false;
                    bool flag2 = false;
                    if (start >= 0 && s[start] != '1' && start != 0 && s[start - 1] != '1')
                    {
                        flag1 = true;
                    }
                    if (finish < n && s[finish] != '1' && finish != n - 1 && s[finish + 1] != '1')
                    {
                        flag2 = true;
                    }

                    if (flag1)
                    {
                        s[start] = '1';
                        start--;
                    }
                    if (flag2)
                    {
                        s[finish] = '1';
                        finish++;
                    }

                    count++;
                }
            }
            prev = i;
        }

        if (prev != -1)
        {
            ll finish = prev + 1;

            ll count = 0;

            while (finish < n && count < m)
            {
                if (s[finish] == '1')
                {
                    break;
                }
                s[finish] = '1';
                count++;
                finish++;
            }
        }

        cout << s << endl;
    }

    return 0;
}
