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

bool check(ll n){     // This function will check whether the n is perfect sqaure or not
    ll s = sqrt(n);

    if(s*s==n){         // If yes then return false
        return false;
    }

    return true;
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

        ll a[n];
        ll i;

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        for(i=0;i<n;i++){
            if(check(a[i])){    // If we have found any number which is not perfect sqaure then we got our answer hence break the loop
                break;
            }
        }

        if(i==n){             // If we found none then their multiplication would also be the perfect sqaure hence answer would be no
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;    // Otherwise answer would be yes
        } 
        
    }

    return 0;
}
