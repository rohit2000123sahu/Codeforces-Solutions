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
    
    ll n;
    cin>>n;

    // Let us assume that the board as chessboard of n*n having black and white squares
    // One type of sqaures will have i+j as even and other as odd

    ll i,j;
    vpl sqaure[2];      // 0 for white and 1 for black

    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i+j)%2==0){
                sqaure[0].pb(mp(i,j));      // White cells insertion
            }else{
                sqaure[1].pb(mp(i,j));
            }
        }
    }

    ll w=0; // free white cell index in sqaure
    ll b=0; // free black cell index in square

    // We will try to put the color 1 on white and color 2 on black
    // Here if alice is chosen 1 then we will try to fill the black with 2 and if black are already filled then we will fill the next white with 3
    // Same as above for when he choses 2 and 3 Just we need to chose the opposite block

    for(i=1;i<=n*n;i++){
        ll color;
        cin>>color;

        if(color==1){       // If color chosen by alice is 1 
            if(b==sqaure[1].size()){    
                cout<<3<<" "<<sqaure[0][w].F<<" "<<sqaure[0][w].S<<endl;
                w++;
                cout.flush();
            }else{
                cout<<2<<" "<<sqaure[1][b].F<<" "<<sqaure[1][b].S<<endl;
                b++;
                cout.flush();
            }
        }else if(color==2){
            if(w==sqaure[0].size()){
                cout<<3<<" "<<sqaure[1][b].F<<" "<<sqaure[1][b].S<<endl;
                b++;
                cout.flush();
            }else{
                cout<<1<<" "<<sqaure[0][w].F<<" "<<sqaure[0][w].S<<endl;
                w++;
                cout.flush();
            }
        }else{
            if(w==sqaure[0].size()){
                cout<<2<<" "<<sqaure[1][b].F<<" "<<sqaure[1][b].S<<endl;
                b++;
                cout.flush();
            }else{
                cout<<1<<" "<<sqaure[0][w].F<<" "<<sqaure[0][w].S<<endl;
                w++;
                cout.flush();
            }
        }
    }



    return 0;
}
