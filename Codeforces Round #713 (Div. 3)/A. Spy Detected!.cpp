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

        ll i;
        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        ll temp=-1;

        if(a[0]==a[1]){
            temp=a[0];
        }else if(a[1]==a[2]){
            temp=a[1];
        }else{
            temp=a[0];
        }

        for(i=0;i<n;i++){
            if(temp!=a[i]){
                cout<<i+1<<endl;
                break;
            }
        }     
        
    }

    return 0;
}
