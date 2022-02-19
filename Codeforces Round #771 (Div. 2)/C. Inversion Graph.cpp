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

        vector<ll> vect(n + 1);
        ll i;

        for (i = 1; i <= n; i++)
        {
            cin >> vect[i];
        }

        bool visited[n + 1];
        memset(visited, false, sizeof(visited));

        ll ans = 0;
        ll index = 1;
        for (i = 1; i <= n; i++)
        {
            visited[vect[i]] = true;
            while (index <= n && visited[index])
            {
                index++;
            }
            if (index - 1 == i)
            {
                ans++;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
