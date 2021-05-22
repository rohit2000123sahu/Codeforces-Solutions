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
    
    ll T;
    cin>>T;

    while(T--){
        ll n;
        cin>>n;

        ll i;
        ll a[n+1];

        map< ll, pl > m;

        for(i=1;i<=n;i++){
            cin>>a[i];
        }     

        ll dp[n+1]={0};

        for(i=1;i<=n;i++){
            ll temp = 0;
            if(m.find(a[i])==m.end()){
                m[a[i]]={0,i};
            }else{
                temp+=m[a[i]].S+m[a[i]].F;
                m[a[i]]={m[a[i]].S+m[a[i]].F,i};
            }
            dp[i]=dp[i-1]+temp;
        }

        ll ans=0;

        for(i=1;i<=n;i++){
            ans+=dp[i];
            // cout<<dp[i]<<" ";
        }

        cout<<ans<<endl;
    }

    return 0;
}
