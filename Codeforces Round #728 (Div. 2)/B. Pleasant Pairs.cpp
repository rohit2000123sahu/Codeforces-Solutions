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
  
    // The main part of this problem is to analysis of its time complexity.
    // If we see the brute force will take the O(n2) time.
    // But we see the i+j will never excceed the 2n hence if the project is exceeding 2n then it is not acheivable and we have already sorted our array in 
    // increasing order hence we could break loop and continue with next element in brute force solution.
  
    // This problem just requries the simple modification in the brute force.

    while (T--)
    {
        ll n;
        cin >> n;

        ll a[n];
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vpl vect;

        for (i = 0; i < n; i++)
        {
            vect.pb(mp(a[i], i + 1));
        }

        sort(vect.begin(), vect.end());

        ll maximum = 2 * n;

        ll j;
        ll count = 0;

        for (i = 0; i < n; i++)
        {
            if (vect[i].F > maximum)
            {
                break;
            }

            for (j = i + 1; j < n; j++)
            {
                ll temp = vect[i].F * vect[j].F;
                if (temp > maximum)
                {
                    break;
                }

                if (temp == vect[i].S + vect[j].S)
                {
                    count++;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}
