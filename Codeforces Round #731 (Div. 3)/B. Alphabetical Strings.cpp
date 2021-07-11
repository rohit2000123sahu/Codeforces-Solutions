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

// Use the two pointer technique
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

        ll i;
        ll n = s.size();
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                break;
            }
        }

        if (i == n)
        {
            cout << "NO" << endl;
            continue;
        }

        ll left = i - 1;
        ll right = i + 1;

        ll character = 1;
        bool flag = false;

        while (left >= 0 && right < n)
        {
            if (s[left] - 'a' == character)
            {
                left--;
                character++;
            }
            else if (s[right] - 'a' == character)
            {
                right++;
                character++;
            }
            else
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
            continue;
        }

        while (left >= 0)
        {
            if (s[left] - 'a' == character)
            {
                left--;
                character++;
            }
            else
            {
                flag = true;
                break;
            }
        }

        while (right < n)
        {
            if (s[right] - 'a' == character)
            {
                right++;
                character++;
            }
            else
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }

    return 0;
}
