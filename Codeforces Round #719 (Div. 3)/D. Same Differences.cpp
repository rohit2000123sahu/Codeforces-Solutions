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

        map< ll , ll > m;
      
        // In this we will find the diff of a[i] and i and will be counting how many pairs have the same
        // Among these pairs we can choose any we will get our answer.
        // And for this the total number ways for each value in map will be nC2

        for(i=0;i<n;i++){
            cin>>a[i];
            m[i-a[i]]++;
        }

        ll ans=0;

        for(auto c: m){
            ll temp=c.second;
            ll to_add = temp*(temp-1);
            to_add=to_add/2;

            ans+=to_add;
        }

        cout<<ans<<endl;
    }

    return 0;
}
