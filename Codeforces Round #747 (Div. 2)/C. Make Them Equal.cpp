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
        ll n, i;
        cin >> n;

        char c;
        cin >> c;

        string s;
        cin >> s;

        for (i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1] || s[i] != c)
            {
                break;
            }
        }

        if (i == n)       // Base case if it is already same then nothing to do
        {
            cout << 0 << endl;
        }
        else
        {
            ll start;
            start = n / 2;

            for (i = start; i < n; i++)   // We fill start from n/2th index (index starting from zero) and will check if the any if equal to char c then we got our answer
            {
                if (s[i] == c)
                {
                    break;
                }
            }

            if (i != n)
            {
                cout << 1 << endl;
                cout << i + 1 << endl;
            }
            else          // Else we will need two moves first to set the rest by choosing n and then to set the nth bit by choosing n-1
            {
                cout << 2 << endl;
                cout << n << " " << n - 1 << endl;
            }
        }
    }

    return 0;
}
