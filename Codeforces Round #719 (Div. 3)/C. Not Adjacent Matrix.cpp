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

        if(n==1){
            cout<<1<<endl;
        }else if(n==2){
            cout<<-1<<endl;
        }else{
            ll a[n][n];
            ll i,j;
            ll count=1;
            for(i=0;i<n;i++){         // We will assume it like the chessboard and then first fill all the white cells and then all the black cells
                if((i+1)%2==0){
                    j=1;
                }else{
                    j=0;
                }

                while(j<n){
                    a[i][j]=count;
                    count++;
                    j=j+2;
                }

            }


            for(i=0;i<n;i++){
                if((i+1)%2==0){
                    j=0;
                }else{
                    j=1;
                }

                while(j<n){
                    a[i][j]=count;
                    count++;
                    j=j+2;
                }
                
            }


            for(i=0;i<n;i++){
                for(j=0;j<n;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        
    }

    return 0;
}
