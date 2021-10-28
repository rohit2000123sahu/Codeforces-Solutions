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
        string s;
        cin >> s;

        ll i, n = s.size();
        ll val = 27;
        ll index = -1;
        for (i = 0; i < n; i++)
        {
            if (s[i] - 'a' < val)
            {
                val = s[i] - 'a';
                index = i;
            }
        }
        cout << (char)(val + 'a') << " ";
        for (i = 0; i < n; i++)
        {
            if (i != index)
            {
                cout << s[i];
            }
        }
        cout << endl;
    }

    return 0;
}
