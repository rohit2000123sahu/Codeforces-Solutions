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
        ll n, x, y;
        cin >> n >> x >> y;

        vector<ll> vect(n);
        ll i;

        ll sum = 0;
        for (i = 0; i < n; i++)
        {
            cin >> vect[i];
            sum += vect[i];
        }

        // Simply we will check the sum+x+y if it is divislbe by 2 then Alice else Bob is answer
        if ((sum + x + y) % 2 == 0)
        {
            cout << "Alice" << endl;
        }
        else
        {
            cout << "Bob" << endl;
        }
    }

    return 0;
}
