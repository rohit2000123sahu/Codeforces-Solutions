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

ll calc(ll n, ll m){
    ll ans=m-1;
    ans+=m*(n-1);
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
        ll n,m,k;
        cin>>n>>m>>k;
        
        // This problem solution matches with the problem name " Cake is Lie" 
        // In reality there is always only one value is possible and also that value is not depenedent on the steps that we have taken.
        // It can also be proved mathematically easily.
        // Thus we can say the given "Cake is Lie" and answer doesn't depend on this.

        if(calc(n,m)==k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}
