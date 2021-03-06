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

        string s;
        cin>>s;

        if(n==1){                       //Corner Case
            cout<<0<<endl;
            continue;
        }

        ll pre[n+2]={0};                // We will calculate the cost of moving all the sheeps at ith position starting from prefix 
        ll suf[n+2]={0};                // and also starting from suffix

        ll cnt=0;

        ll val=0;
        ll i;
        for(i=1;i<=n;i++){              // Using this loop we will calculate it
            if(s[i-1]=='*'){
                pre[i]=pre[i-1];
                cnt++;
            }else{
                val+=cnt;
                pre[i]=val;
            }
        }

        cnt=0;
        val=0;

        for(i=n;i>=1;i--){
            if(s[i-1]=='*'){
                suf[i]=suf[i+1];
                cnt++;
            }else{
                val+=cnt;
                suf[i]=val;
            }
        }

        ll ans=1e12;
          
        // Our answer would be pre[i]+suf[i+1]

        for(i=1;i<n;i++){                       // Hence we will loop through and will find the minimum answer
            ans=min(ans,pre[i]+suf[i+1]);
        }

        cout<<ans<<endl;

        
    }

    return 0;
}
