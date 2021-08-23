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
        ll n,k;
        cin>>n>>k;

        string s;
        cin>>s;

        ll i;
        ll start=-1;
        ll finish=-1;

        for(i=0;i<n;i++){
            if(s[i]=='*'){
                start=i;
                break;
            }
        }

        for(i=n-1;i>=0;i--){
            if(s[i]=='*'){
                finish=i;
                break;
            }
        }

        if(start==-1){
            cout<<0<<endl;
            continue;
        }
        
        if(finish==-1){
            cout<<1<<endl;
            continue;
        }

        
        i=start;
        ll count=1;
        while(i<n){
            i++;
            ll j=1;
            ll pos=-1;
            while(i<n && j<=k){
                if(s[i]=='*'){
                    pos=i;
                }
                i++;
                j++;
            }

            if(pos==-1){
                break;
            }

            i=pos;
            count++;
        }

        cout<<count<<endl;
        
    }

    return 0;
}
