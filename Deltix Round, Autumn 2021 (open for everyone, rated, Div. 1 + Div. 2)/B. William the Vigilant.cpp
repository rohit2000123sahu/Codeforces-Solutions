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

    ll n, q;
    cin >> n >> q;

    string s;
    cin >> s;

    ll i;
    ll total = 0;

    for (i = 0; i < n - 2; i++)
    {
        if (s[i] == 'a' && s[i + 1] == 'b' && s[i + 2] == 'c')
        {
            total++;
        }
    }

    while (q--)
    {
        ll pos;
        char c;
        cin >> pos >> c;
        pos--;
        if (pos < n - 2 && s[pos] == 'a' && s[pos + 1] == 'b' && s[pos + 2] == 'c')
        {
            total--;
        }
        else if (pos > 0 && pos < n - 1 && s[pos - 1] == 'a' && s[pos] == 'b' && s[pos + 1] == 'c')
        {
            total--;
        }
        else if (pos > 1 && pos < n && s[pos - 2] == 'a' && s[pos - 1] == 'b' && s[pos] == 'c')
        {
            total--;
        }

        s[pos] = c;

        if (pos < n - 2 && s[pos] == 'a' && s[pos + 1] == 'b' && s[pos + 2] == 'c')
        {
            total++;
        }
        else if (pos > 0 && pos < n - 1 && s[pos - 1] == 'a' && s[pos] == 'b' && s[pos + 1] == 'c')
        {
            total++;
        }
        else if (pos > 1 && pos < n && s[pos - 2] == 'a' && s[pos - 1] == 'b' && s[pos] == 'c')
        {
            total++;
        }

        cout << total << endl;
    }

    return 0;
}
