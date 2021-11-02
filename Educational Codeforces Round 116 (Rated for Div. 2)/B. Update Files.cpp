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
        ll n, k;
        cin >> n >> k;

        ll maximum_transfer = 1;    // Maximum computers we can update initially we can update only one computer
        

        ll ans = 0;
        
        // Each time we can increase our update capacity by double (maximum upto k)
        while (maximum_transfer < k && n>1)
        {
            n = n - maximum_transfer;
            ans++;
            if (maximum_transfer * 2 <= k)
            {
                maximum_transfer *= 2;
            }
            else
            {
                maximum_transfer = k;
                break;
            }
        }
        
        // Once maximum k is reached
        // We can get answer directly
        if((n-1)%k==0){
            ans+=(n-1)/k;
        }else if(n>1){
            ans+=(n-1)/k;
            ans+=1;
        }

        cout << ans << endl;
    }

    return 0;
}
