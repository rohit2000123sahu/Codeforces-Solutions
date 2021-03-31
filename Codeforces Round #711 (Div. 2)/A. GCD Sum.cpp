// Just a simple brute force
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

ll gcd(ll a, ll b){
    if(b==0){
        return a; 
    }
    return gcd(b,a%b);
}

ll sum(ll n){
    ll ans=0;
    while(n>0){
        ans+=n%10;
        n/=10;
    }
    return ans;
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

        while(gcd(n,sum(n))==1){
            n++;
        }

        cout<<n<<endl;
        
    }

    return 0;
}
