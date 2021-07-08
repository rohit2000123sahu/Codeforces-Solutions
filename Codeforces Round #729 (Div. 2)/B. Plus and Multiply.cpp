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

// We could always generate this expression a^k+b(any number)
// Any number could be generated inside the brackets 
// Try to analyse it

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    while (T--)
    {
        ll n, a, b;
        cin >> n >> a >> b;

        bool flag = false;

        ll num = 1;
        while (num <= n)
        {
            ll temp = n - num;
            if (temp % b == 0)
            {
                flag = true;
                break;
            }
            num = num * a;

            if (num == 1)     // For case when 1;
            {
                break;
            }
        }

        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}
