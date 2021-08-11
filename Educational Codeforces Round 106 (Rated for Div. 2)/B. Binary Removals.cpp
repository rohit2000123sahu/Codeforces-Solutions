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
        string s;
        cin >> s;

        ll index = -1;
        ll n = s.size();
        ll i;
      
        // If we found 11 at any place then after this index there should not be any 00 present
        // Because we could remove single zero but we can not remove multiple zeroes from the array.
      
        for (i = 0; i < n - 1; i++)
        {
            if (s[i] == '1' && s[i + 1] == '1')
            {
                index = i;
                break;
            }
        }

        if (index == -1)
        {
            cout << "YES" << endl;
        }
        else
        {
            bool flag = true;
            for (i = index + 1; i < n - 1; i++)
            {
                if (s[i] == '0' && s[i + 1] == '0')
                {
                    flag = false;
                    break;
                }
            }

            if (flag)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
