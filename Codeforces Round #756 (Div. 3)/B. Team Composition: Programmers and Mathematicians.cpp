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
        ll a, b;
        cin >> a >> b;

        ll maximum_ans = (a + b) / 4; // First we will go for maximum answer that is the maximum number of pairs possible of size 4

        if (a > b)              // Changing the problem such that a<b always
        {
            swap(a, b);
        }

        if (b / 3 > a)         // Since a is minimum aand b is maximum the maximum number of pairs will get limited to a itself
        {
            maximum_ans = a;
        }

        cout << maximum_ans << endl;
    }

    return 0;
}
