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
        ll a,b;
        cin>>a>>b;

          // We will took x as a and y as a*b 
          // z will be sum of x and y
      
          ll x=a;
          ll y=a*b;
                  
          ll z=x+y;

          if(x==y || x==z){       // If x is equal to y or z then answer would be no else yes
              cout<<"NO"<<endl;
          }else{
              cout<<"YES"<<endl;
              cout<<x<<" "<<y<<" "<<z<<endl;
          }
    }

    return 0;
}
