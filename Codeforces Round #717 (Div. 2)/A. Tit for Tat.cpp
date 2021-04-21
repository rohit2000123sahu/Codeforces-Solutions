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

        ll a[n];
        ll i,j;

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        i=0;
        j=n-1;
      
        // In this we will decrease the elements form starting and will try to increase the last element by 1

        while(k>0){
            while(i<n && a[i]==0 && i<j){
                i++;
            }

            a[i]--;
            a[j]++;
            k--;
        }

        for(auto c: a){
            cout<<c<<" ";
        }

        cout<<endl;
        
    }

    return 0;
}
