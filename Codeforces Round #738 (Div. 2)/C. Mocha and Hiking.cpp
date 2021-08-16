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
        cin >> n;

        ll i;
        ll a[n];

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
      
        // Just three cases

        if (a[n - 1] == 0)                  // If last and second last is connected then direct answer 1 to n+1
        {
            for (i = 1; i <= n + 1; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else if (a[0] == 1)               // If first and last are connected then direct answer starting from n+1 then 1 to n
        {
            cout << n + 1 << " ";
            for (i = 1; i <= n; i++)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else                          // Else we will find 01 that will be out turning point
        {
            ll index = -1;
            for (i = 0; i < n - 1; i++)
            {
                if (a[i] == 0 && a[i + 1] == 1)
                {
                    index = i;
                    break;
                }
            }

            if (index == -1)
            {
                cout << -1 << endl;
            }
            else
            {
                for (i = 0; i < index; i++)
                {
                    cout << i + 1 << " ";
                }
                cout << index + 1 << " ";
                cout << n + 1 << " ";
                for (i = index + 1; i < n; i++)
                {
                    cout << i + 1 << " ";
                }
                cout << endl;
            }
        }
    }

    return 0;
}
