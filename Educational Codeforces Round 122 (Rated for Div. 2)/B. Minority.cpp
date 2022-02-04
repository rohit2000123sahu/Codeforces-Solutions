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

        ll zero, one;
        zero = one = 0;
        ll i;

        for (i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                one++;
            }
            else
            {
                zero++;
            }
        }

        // If both count are eqaul then we will select the substring of length n-1
        if (one == zero)
        {
            cout << zero - 1 << endl;
        }
        else            // Else the minimum number is our answer
        {
            cout << min(zero, one) << endl;
        }
    }

    return 0;
}
