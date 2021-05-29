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

bool comp(pl a, pl b)
{
    return a.first > b.first;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    T = 1;
  
    // In this easy version according to the constraints the time complexity of O(n2) is permissible hencce here the solution given below is of O(n2).
    // This solution is quite easy to understand because it is based on greedy.
  
    // In this solution we first took all the positive potions.
    // After that we will start taking the negative potions and will check it is possible to have that negative potions or not.
    // If yes we will increase the count by 1

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

        ll count = 0;

        ll prefix[n] = {0};

        if (a[0] >= 0)
        {
            prefix[0] = a[0];
            count++;
        }

        for (i = 1; i < n; i++)     // In this loop we are taking all the positive potions
        {
            prefix[i] = prefix[i - 1];
            if (a[i] >= 0)
            {
                prefix[i] += a[i];
                count++;
            }
        }

        vector<pl> vect;

        for (i = 0; i < n; i++)   // Pushing all the negative potions in the vector vect. 
        {
            if (a[i] < 0)
            {
                vect.pb(mp(a[i], i));
            }
        }

        sort(vect.begin(), vect.end(), comp);   // Sorting the vector in the decreasing manner

        for (auto c : vect)       // Now we will traverse the vector and check if the current value is permissible or not
        {
            ll val = c.F;
            ll index = c.S;

            if (prefix[index] >= 0)
            {
                for (i = index; i < n; i++)       // Checking that value and also updating the prefix array
                {
                    if (prefix[i] + val >= 0)
                        prefix[i] += val;
                    else
                        break;
                }
                if (i == n)                     // If it is possible than increase the count by 1
                {
                    count++;
                }
            }
        }

        cout << count << endl;              // Finally print the answer
    } 

    return 0;
}
