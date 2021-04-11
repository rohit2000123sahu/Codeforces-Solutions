// This is the just the implementation problem
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

        vector< string > vect;

        ll i,j;

        for(i=0;i<n;i++){
            string s;
            cin>>s;
            vect.pb(s);
        }

        ll r,c;
        bool flag=true;
        bool loop =true;

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(vect[i][j]=='*'){
                    if(flag){
                        r=i;
                        c=j;
                        flag=false;
                    }else{
                        if(j==c){
                            if(j==n-1){
                                vect[r][0]='*';
                                vect[i][0]='*';
                            }else{
                                vect[r][j+1]='*';
                                vect[i][j+1]='*';
                            }
                        }else if(i==r){
                            if(i==n-1){
                                vect[0][c]='*';
                                vect[0][j]='*';
                            }else{
                                vect[i+1][c]='*';
                                vect[i+1][j]='*';
                            }
                        }else{
                            vect[r][j]='*';
                            vect[i][c]='*';
                        }
                        loop=false;
                        break;
                    }
                }
            }
            if(loop==false){
                break;
            }
        }

        for(auto c: vect){
            cout<<c<<endl;
        }
        
    }

    return 0;
}
