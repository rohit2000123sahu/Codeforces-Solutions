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

    ll n;
    cin >> n;

    ll i;
    ll sum = 0;
    vl vect;

    for (i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;

        vect.pb(temp);
        sum += temp;
    }

    sort(all(vect));

    ll m;
    cin >> m;

    for (i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;

        ll index = lower_bound(vect.begin(), vect.end(), x) - vect.begin();
        if (index == n)       // We need to select the hero with maximum power and increase its power
        {
            ll first = x - vect[n - 1];
            ll second = 0;
            if (sum - vect[n - 1] < y)
            {
                second = y - (sum - vect[n - 1]);
            }

            cout << first + second << endl;
        }
        else
        {   // Here two cases 
            ll ans = 0;

            if (sum - vect[index] < y)    // Either select hero just greater than or equal dragon defence
            {
                ans = y - (sum - vect[index]);
            }

            if (index - 1 >= 0)          // Else select one just below that
            {
                ll first = x - vect[index - 1];
                ll second = 0;
                if (sum - vect[index - 1] < y)
                {
                    second = y - (sum - vect[index - 1]);
                }

                ans = min(ans, first + second);
            }
            // We will find minimum in both the cases and print the answer
          
            cout << ans << endl;
        }
    }

    return 0;
}
