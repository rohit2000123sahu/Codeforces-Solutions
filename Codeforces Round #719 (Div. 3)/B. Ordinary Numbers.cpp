//Simple brute force
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

ll solve(ll dig, ll n){
    ll temp=0;
    ll num=dig;
    while(num<=n){
        temp++;
        num=num*10+dig;
    }

    return temp;
}

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

        ll ans=0;

        for(ll i=1;i<=9;i++){
            ans+=solve(i,n);
        }

        cout<<ans<<endl;
        
    }

    return 0;
}
