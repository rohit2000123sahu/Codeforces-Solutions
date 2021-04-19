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

ll power(ll a, ll b){
    if(b==0){
        return 1;
    }
    ll temp = power(a,b/2);
    ll ans = temp*temp;
    ans=ans%MOD;
    if(b%2==0){
        return ans;
    }else{
        ans=ans*a;
        ans=ans%MOD;
        return ans;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--){
        ll n,k;
        cin>>n>>k;      // If we see the question, one of the answer would be n-1 digits will be max value and the remaining one will be zero
        // Hence for finding all the answers we have to permutate the zeroes in their respective columns
        // Hence answer would be n^k

        cout<<power(n,k)<<endl;
        
    }

    return 0;
}
