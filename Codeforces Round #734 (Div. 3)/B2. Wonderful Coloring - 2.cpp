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
        ll n, k;
        cin >> n >> k;

        vector<pair<ll, ll>> vect;
        ll i;

        map<ll, ll> m;

        for (i = 0; i < n; i++)
        {
            ll temp;
            cin >> temp;
            vect.pb(mp(temp, i));
            m[temp]++;
        }

        ll total = 0;       
        ll partial = 0;
        for (auto c : m)      // This is for calculating the answer.
        {                     // It is same as we have done in the previous
            if (c.S >= k)
            {
                total++;
            }
            else
            {
                partial += c.S;
            }
        }

        total += partial / k;

        total = total * k;      // We got total how many colors will be there

        sort(all(vect));        // Now we have sorted the vector

        ll ans[n] = {0};        // To store our answer

        i = 0;
        ll color = 0;           // This indicates the color which need to be used

        while (i < n && total > 0)    // We will run the loop
        {
            ll num = vect[i].first;
            ll count = 0;

            while (i < n && vect[i].first == num && total > 0)    // For the same number we will color them till count<k and total is also positive
            {
                if (count < k)
                {
                    ans[vect[i].second] = color % k + 1;
                    color++;
                    total--;
                }
                i++;        // if count>=k then we should skip it and it will left uncolored that we already set it
                count++;
            }

            // i++;
        }

        for (i = 0; i < n; i++)     // Finally printing the answer
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
