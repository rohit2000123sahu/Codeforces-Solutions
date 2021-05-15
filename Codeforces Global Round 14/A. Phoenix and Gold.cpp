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
        ll n,x;
        cin>>n>>x;

        ll i;
        ll w[n];

        ll sum=0;
        for(i=0;i<n;i++){
            cin>>w[i];
            sum+=w[i];
        }

        if(sum==x){
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;
        sort(w,w+n,greater< ll >());

        if(w[0]>x){
            for(i=0;i<n;i++){
                cout<<w[i]<<" ";
            }
            cout<<endl;
        }else{
            sum=0;
            for(i=0;i<n;i++){
                if(w[i]+sum==x){
                    swap(w[i],w[i+1]);
                    break;
                }else{
                    sum+=w[i];
                }
            }
            for(i=0;i<n;i++){
                cout<<w[i]<<" ";
            }
            cout<<endl;
        }


        
    }

    return 0;
}
