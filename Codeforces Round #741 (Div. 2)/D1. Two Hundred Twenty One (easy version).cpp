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
        ll n, q;
        cin >> n >> q;

        string s;
        cin >> s;

        ll preE[n + 1] = {0};
        ll preO[n + 1] = {0};

        ll i;

        for (i = 0; i < n; i++)
        {
            if ((i + 1) % 2 == 0)
            {
                preE[i + 1] = preE[i];
                if (s[i] == '+')
                {
                    preE[i + 1]++;
                }
                else
                {
                    preE[i + 1]--;
                }
                preO[i + 1] = preO[i];
            }
            else
            {
                preO[i + 1] = preO[i];
                if (s[i] == '+')
                {
                    preO[i + 1]++;
                }
                else
                {
                    preO[i + 1]--;
                }
                preE[i + 1] = preE[i];
            }
        }

        while (q--)
        {
            ll a, b;
            cin >> a >> b;

            ll odd = preO[b] - preO[a - 1];
            ll even = preE[b] - preE[a - 1];

            if (even == odd)
            {
                cout << 0 << endl;
            }
            else if ((b - a + 1) % 2 != 0)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
    }

    return 0;
}
