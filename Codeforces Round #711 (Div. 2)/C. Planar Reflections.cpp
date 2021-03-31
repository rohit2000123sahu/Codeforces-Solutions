// This is a dp problem
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

ll n;
ll dp[1001][1001][2];

ll solve(ll pos, ll k, ll dir){
    if(pos<0 || pos>n || k<=0){   // Base condition
        return 0;
    }
    if(pos==0 && dir==1){         // If we are at the start position and moving towards left then return 1
        return 1;
    }
    if(pos==n && dir==0){         // Vice versa of above
        return 1; 
    }

    if(dp[pos][k][dir]!=-1){      // If the sub problem is already calculated then return it
        return dp[pos][k][dir];
    }

    ll ans=0;
    // Here we are having only two moves for both the direction
    
    if(dir==0){                     
        ans+=solve(pos+1,k,dir);    // We can move the same ball to the position pos+1
        ans+=solve(pos,k-1,1);      // And the reflected ball will change the direction and its power will decrease by 1
    }else{
        ans+=solve(pos-1,k,dir);
        ans+=solve(pos,k-1,0);
    }

    ans%=MOD;

    dp[pos][k][dir]=ans;        // Storing the sub problems

    return ans;     

}



int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--){
       ll k;
       cin>>n>>k;
       memset(dp,-1,sizeof(dp));
       cout<<solve(0,k,0)<<endl;    // Currently we are at postion 0
    }

    return 0;
}
