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

bool comp(pl a, pl b)         // Comparator to sort the vector in the decreasing order
{
    return a.first > b.first;
}

// In this problem the main concept is that we will sort the values in the decreasin manner then we will start filling those value
// Value will be filled one by one in the tower.
// In the first (from left to right) go all the towers will be having the one block and then in second go (right to left) we will fill the one-one block.
// In this manner the heights of two blocks will never differ more by x

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    while (T--)
    {
        ll n, m, x;
        cin >> n >> m >> x;

        vector<pl> vect;

        ll ans[n + 1] = {0};

        ll i;

        for (i = 1; i <= n; i++)        // We will store the values and their index as well because when we will sort the array we will loose the original indices
        {
            ll temp;
            cin >> temp;

            vect.pb({temp, i});       // Pushing the value and the index in the vector
        }

        sort(vect.begin(), vect.end(), comp); // Sorting the vector

        i = 0;
        while (i < n)
        {
            ll j = 0;
            while (i < n && j < m)          // First go filling from left to right
            {
                ans[vect[i].S] = j + 1;
                j++;
                i++;
            }

            j = m - 1;
            while (i < n && j >= 0)     // Second go filling from right to left
            {
                ans[vect[i].S] = j + 1;
                j--;
                i++;
            }
        }

        cout << "YES" << endl;        // Answer is always yes

        for (i = 1; i <= n; i++)       // Printing the answer
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
