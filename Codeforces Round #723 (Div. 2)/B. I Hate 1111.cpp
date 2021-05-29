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

    while (T--)
    {
        ll n;
        cin >> n;

        if (n % 11 == 0 || n % 111 == 0)      // Base condition
        {
            cout << "YES" << endl;
        }
        else                                
        {
            while (n > 0 && n % 11 != 0)    // Else we will substract 111 from n till its modulo 11 doesn't become 0 
            {
                n = n - 111;                // It works because we can write the 111 = (11*10)+1 hence on substracting 111 from n will decrease the n%11 by 1 which will ultimately could make n%11 == 0 
            }
            if (n > 0 && n % 11 == 0)     // If after the loop n is greather than 0, in that case answer is yes else no
            {
                cout << "YES" << endl;
            }
            else                          
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
