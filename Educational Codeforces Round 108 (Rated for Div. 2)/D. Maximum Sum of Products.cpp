// In this question we will use the same concept as we use to solve the longest palindromic subsequence

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
    
    ll n;
    cin>>n;

    ll i;
    ll a[n];
    ll b[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    for(i=0;i<n;i++){
        cin>>b[i];
    }

    ll prefix[n+1];     // For precomputing the answer

    prefix[0]=0;

    for(i=0;i<n;i++){
        prefix[i+1]=prefix[i]+a[i]*b[i];
    }


    ll ans=prefix[n];

    for(i=0;i<n;i++){                   // In this we will start from the ith element as the center point and then we will increment length by 2 (+1 on left and +1 on right)
                                        // Here we need to observe that the answer will increase by a[l]*b[r]+a[r]*b[l] which is the key observation

        ll curr = a[i]*b[i];            // Assuming the i th element as the start element 
        ll l=i-1;                       // This will take care of all odd length sub-arrays
        ll r=i+1;

        while(l>=0 && r<n){
            curr=curr+a[l]*b[r]+a[r]*b[l];                         // We are incrementing the curr as discussed above
            ans=max(ans,curr+prefix[n]-prefix[r+1]+prefix[l]);      // Now we are comparing the answer with the maximum we got by reversing from l to r
            l--;
            r++;
        }

        curr=0;                       // Now we are not considering the any element
        l=i;                          // This will take care of the even length sub-arrays
        r=i+1;

        while(l>=0 && r<n){                                          // Same as above
            curr=curr+a[l]*b[r]+a[r]*b[l];
            ans=max(ans,curr+prefix[n]-prefix[r+1]+prefix[l]);
            l--;
            r++;
        }

    }

    cout<<ans<<endl;            // Print the final answer

    return 0;
}
