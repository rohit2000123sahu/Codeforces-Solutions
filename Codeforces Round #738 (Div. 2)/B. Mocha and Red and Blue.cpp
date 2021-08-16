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
  
    // Just go greedily 

    while (T--)
    {
        ll n;
        cin >> n;

        ll i;
        string s;
        cin >> s;

        char prev = '?';
        for (i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                prev = 'R';
            }
            else if (s[i] == 'B')
            {
                prev = 'B';
            }
            else
            {
                if (prev == 'R')
                {
                    s[i] = 'B';
                    prev = 'B';
                }
                else if (prev == 'B')
                {
                    s[i] = 'R';
                    prev = 'R';
                }
            }
        }

        if (prev == '?')
        {
            // cout << n << endl;
            for (i = 0; i < n; i++)
            {
                // cout << i << endl;
                if (i % 2 == 0)
                {
                    s[i] = 'R';
                }
                else
                {
                    s[i] = 'B';
                }
            }
        }
        else
        {
            ll index = -1;
            for (i = 0; i < n; i++)
            {
                if (s[i] != '?')
                {
                    index = i;
                    break;
                }
            }
            prev = s[i];
            if (index != 0)
            {
                for (i = index - 1; i >= 0; i--)
                {
                    if (prev == 'B')
                    {
                        s[i] = 'R';
                        prev = 'R';
                    }
                    else
                    {
                        s[i] = 'B';
                        prev = 'B';
                    }
                }
            }
        }

        cout << s << endl;
    }

    return 0;
}
