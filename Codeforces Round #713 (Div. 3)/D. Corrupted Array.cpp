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

        ll a[n+2];
        ll i;

        map< ll , ll > m;
        ll sum=0;

        for(i=0;i<n+2;i++){
            cin>>a[i];
            sum+=a[i];
            m[a[i]]++;
        }


        // cout<<sum<<endl;

        vl vect;

        for(i=0;i<n+2;i++){
            m[a[i]]--;          // In this we are considering a[i] hence it should be reduced form map
            ll temp = sum-a[i]; // Let a[i] be as x
            if(temp%2==0){
                temp=temp/2;    // Sum of the remaining n element
                if(m[temp]>0){  // If temp is present then qe got our answer
                    for(ll j=0;j<n+2;j++){
                        if(j==i){
                            continue;
                        }else if(a[j]==temp){
                            temp=-1;      // This is important step as there may be multiple values in a having value equal to temp
                        }else{
                            vect.pb(a[j]);
                        }
                    }
                    break;
                }
            }
            m[a[i]]++;    // Adding a[i] back to map
        }

        if(vect.size()!=n){
            cout<<"-1"<<endl;
        }else{
            for(auto c: vect){
                cout<<c<<" ";
            }
            cout<<endl;
        }


        
    }

    return 0;
}
