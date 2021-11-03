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
  
    // Brute Force

    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;

        map<char, ll> keyboard;
        ll i;

        for (i = 0; i < 26; i++)
        {
            keyboard[s[i]] = i + 1;
        }

        string input;
        cin >> input;

        ll ans = 0;
        ll prev = keyboard[input[0]];
        for (i = 0; i < input.size(); i++)
        {
            ans += abs(keyboard[input[i]] - prev);
            prev = keyboard[input[i]];
        }

        cout << ans << endl;
    }

    return 0;
}
