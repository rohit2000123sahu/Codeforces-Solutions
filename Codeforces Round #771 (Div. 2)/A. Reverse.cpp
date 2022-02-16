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
        ll n;
        cin >> n;
        vector<ll> arr(n + 1);
        ll i;

        for (i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        i = 1;
        while (i <= n && arr[i] == i)
        {
            i++;
        }

         
        if (i != n + 1)
        {
            ll num = i;
            while (i <= n && arr[i] != num)
            {
                i++;
            }

            // We will find the position where arr[i] !=i and then we will reverse to make arr[i]==i;
            ll start = num;
            ll j = i;

            while (start < j)
            {
                swap(arr[start], arr[j]);
                start++;
                j--;
            }
        }

        for (i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
