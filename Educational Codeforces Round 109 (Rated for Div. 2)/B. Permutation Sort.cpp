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
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }

        ll i;
        for(i=1;i<n;i++){
            if(a[i]<a[i-1]){
                break;
            }
        }

        if(i==n){
            cout<<0<<endl;
            continue;
        }

        ll mi=-1;
        ll ma=-1;

        for(i=0;i<n;i++){
            if(a[i]==1){
                mi=i+1;
            }
            if(a[i]==n){
                ma=i+1;
            }
        }

        if(mi==1 || ma==n){
            cout<<1<<endl;
        }else if(mi==n && ma==1){
            cout<<3<<endl;
        }else{
            cout<<2<<endl;
        }
                
    }

    return 0;
}
