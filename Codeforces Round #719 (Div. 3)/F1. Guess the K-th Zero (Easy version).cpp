// This problem is simpl based on  the concept of the binary search
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

ll solve(ll l ,ll r ,ll k){   // Function for solving the problem
    if(l==r){                 // If l==r then return it 
        return l;
    }

    ll mid = l+(r-l)/2;       // Now we will calculate the mid

    cout<<"? "<<l<<" "<<mid<<endl;  // We will ask for the sum from l to r
    cout.flush();

    ll ans;
    cin>>ans;                 // Taking that sum

    ll left = (mid-l+1)-ans;    // Here we are finding how many zeroes are their in the left part (l to mid inclusive) by total sum- sum we got. Here total sum will be mid-l+1
    if(k>left){                 // If the k is more than zeroes in left part than our problem is reduced to right part with k updated as k-left
        return solve(mid+1,r,k-left);
    }else{                      // Else our answer is the left part with the k remain same
        return solve(l,mid,k);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n,k,t;       // Taking the input
    cin>>n>>t>>k;

    ll ans=solve(1,n,k);    // Solving it using the solve function and storing it in the answer
    cout<<"! "<<ans<<endl;  // Printing the answer
    cout.flush();

    return 0;
}
