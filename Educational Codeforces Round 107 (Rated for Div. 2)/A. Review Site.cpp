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

        ll up1=0;   // These counters will contains the count of ups and downs of server1 and server2
        ll up2=0;
        ll d1=0;
        ll d2=0;
        ll i;

        for(i=0;i<n;i++){
            ll r;
            cin>>r;

            if(r==1){                 // If r is 1 
                if(up1-d1>up2-d2){    // If diff of up and down on server 1 is greater than other server then we will go for server 1
                    up1++;
                }else{                // Else go for server 2
                    up2++;
                }
            }else if(r==2){
                if(up1-d1>up2-d2){    // Same explanation as above one
                    d2++;
                }else{
                    d1++;
                }
            }else{
                if(up1-d1>up2-d2){    // Same as above
                    if(d1>up1){       // Condition given in the question
                        d1++;
                    }else{
                        up1++;
                    }
                }else{
                    if(d2>up2){
                        d2++;
                    }else{
                        up2++;
                    }
                }
            }

        }

        cout<<up1+up2<<endl;
        
    }

    return 0;
}
