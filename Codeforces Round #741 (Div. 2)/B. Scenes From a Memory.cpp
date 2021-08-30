#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
typedef unordered_map<ll, ll> uml;
typedef vector<pl> vpl;
typedef map<ll, ll> ml;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    bool prime[100];
    memset(prime,false,sizeof(prime));
    for(ll i=2;i<100;i++){
        prime[i]=true;
        for(ll j=2;j*j<=i;j++){
            if(i%j==0){
                prime[i]=false;
            }
        }
    }

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        
        string s;
        cin>>s;
        
        ll i=0;
        bool flag=false;
        for(i=0;i<n;i++){
            if(s[i]=='1' || s[i]=='4' || s[i]=='6' || s[i]=='8' || s[i]=='9'){
                cout<<1<<endl;
                cout<<s[i]<<endl;
                flag=true;
                break;
            }
        }
        
        if(!flag){
            bool done=false;
            for (i = 0; i < n; i++) {
                for (ll j = i + 1; j < n; j++) {
                    if (!prime[(s[i] - '0') * 10 + (s[j] - '0')]) {
                        cout << 2 << endl;
                        cout << s[i] << s[j] << endl;
                        done=true;
                        break;
                    }
                }
                if(done){
                    break;
                }
            }
            
        }
    }

    return 0;
}
