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
        ll x1, y1, x2, y2, x3, y3;
        cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
        
        // Logic 
        // So the points lie in the line y=k are not reachable only when the third point is less then the other two points.
        // i.e. we can say that the traingle is inverse of the general triangle. 

        if (y1 == y2 && y3 < y1)
        {
            cout << abs(x1 - x2) << endl;
        }
        else if (y2 == y3 && y1 < y2)
        {
            cout << abs(x2 - x3) << endl;
        }
        else if (y3 == y1 && y2 < y3)
        {
            cout << abs(x3 - x1) << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
