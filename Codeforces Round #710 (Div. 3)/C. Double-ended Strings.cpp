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
        string a,b;
        cin>>a>>b;

        ll n,m;
        n=a.size();
        m=b.size();
        
        ll maxi=0;

        ll i,j;

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                ll i1=i;
                ll j1=j;
                ll count=0;
                while(i1<n && j1<m){
                    if(a[i1]==b[j1]){
                        count++;
                        i1++;
                        j1++;
                    }else{
                        break;
                    }
                }
                maxi=max(maxi,count);
            }
        }

        cout<<n+m-2*maxi<<endl;
        
    }

    return 0;
}
