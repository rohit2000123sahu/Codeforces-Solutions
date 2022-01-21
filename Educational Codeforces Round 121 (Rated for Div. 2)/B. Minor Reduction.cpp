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
        string num;
        cin >> num;

        ll i;
        ll n = num.size();

        bool done = false;
        
        // Simple Approach 
        // If length is not decreasing i.e. a+b>=10 then we will go for this change 
        // Else we will go for the change in the first two number i.e. num[0] and num[1] because that will maximize the value of the whole number.
        // Implementation is shown below.

        for (i = n - 2; i >= 0; i--)
        {
            ll a = num[i] - '0';
            ll b = num[i + 1] - '0';

            if (a + b >= 10)
            {
                num[i] = '0' + (a + b) / 10;
                num[i + 1] = '0' + (a + b) % 10;
                done = true;
                break;
            }
        }

        if (done)
        {
            cout << num << endl;
        }
        else
        {
            ll a = num[0] - '0';
            ll b = num[1] - '0';

            num[1] = a + b + '0';
            num.erase(num.begin());
            cout << num << endl;
        }
    }

    return 0;
}
