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

        string a,b;
        cin>>a>>b;

        ll zero[n]={0};     // To store the count of zero and one at any point i
        ll one[n]={0};

        ll i;

        if(a[0]=='0'){     // Filling zero and one array
            zero[0]=1;
        }else{
            one[0]=1;
        }

        for(i=1;i<n;i++){
            if(a[i]=='0'){
                zero[i]=zero[i-1]+1;
            }else{
                zero[i]=zero[i-1];
            }

            if(a[i]=='1'){
                one[i]=one[i-1]+1;
            }else{
                one[i]=one[i-1];
            }
        }

        bool flip=false;    // This will store that either the bits are flipped or not

        for(i=n-1;i>=0;i--){
            if(!flip && a[i]==b[i]){  // If bits are same    
                continue;
            }else if(flip && a[i]!=b[i]){
                continue; 
            }else{                       // If bits are not same then 
                if(zero[i]==one[i]){     // Just check if zero and one are equal or not
                    flip=!flip;         // If equal then change the flip
                }else{
                    break;              // Else it is not possible
                }
            }
        }

        if(i==-1){                    // If whole loop is executed then i will be -1
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}
