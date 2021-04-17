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

ll dp[2001][2001];

ll solve(ll l , ll r, ll a[]){
    if(l==r){
        return 0;
    }

    if(dp[l][r]!=-1){
        return dp[l][r];
    }

    dp[l][r] = a[r]-a[l]+min(solve(l+1,r,a),solve(l,r-1,a));

    return dp[l][r];

}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin>>n;

    ll i;

    memset(dp,-1,sizeof(dp));
    ll a[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    cout<<solve(0,n-1,a);
    
    return 0;
}
