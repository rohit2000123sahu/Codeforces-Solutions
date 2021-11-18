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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        
        ll a[n],b[n];
        ll i;
        
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        
        for(i=0;i<n;i++){
            cin>>b[i];
        }
        
        sort(a,a+n);
        sort(b,b+n);
        
        for(i=0;i<n;i++){
            if(b[i]-a[i]==0 || b[i]-a[i]==1){
                continue;
            }else{
                break;
            }
        }
        
        if(i==n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }

    return 0;
}
