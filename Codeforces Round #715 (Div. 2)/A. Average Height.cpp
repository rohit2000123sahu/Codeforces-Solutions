#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626
#define all(x) x.begin(),x.end()
#define endl '\n'
#define MOD 1000000007
typedef vector< ll > vl;
typedef pair< ll , ll > pl;
typedef unordered_map< ll, ll > uml;
typedef vector< pl > vpl;
typedef map< ll, ll > ml;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        ll a[n];
        ll i;

        vl odd,even;
        // In this we will separate the odd numbers and even numbers
        // We have done this because we want to mnimise that rounding which will get reduce if the numbers are continuously even and continuously odd.
        // In the worst case only one rounding will take place when we move from even to odd or from odd to even
      
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                even.pb(a[i]);
            }else{
                odd.pb(a[i]);
            }
        }

        for(auto c: even){
            cout<<c<<" ";
        }

        for(auto c: odd){
            cout<<c<<" ";
        }

        cout<<endl;
        
    }

    return 0;
}
