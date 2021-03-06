// This runs in O(n3) and will pass the test cases according to the constraints but there is an optimised version which is also uploaded.
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

bool equal(ll n, ll a[]){       // Function for checking whether the partition can happens or not using DP (Famous DP problem named as subset sum problem)
    ll i=0;
    ll s=0;
    for(i=0;i<n;i++){
        s=s+a[i];
    }
    if(s%2!=0){
        return 0;
    }
    
    ll j;
    bool dp[s/2+1][n+1];
    memset(dp,false,sizeof(dp));
    
    for(i=0;i<n;i++){
        dp[0][i]=true;
    }
    
    for(i=1;i<=s/2;i++){
        for(j=1;j<=n;j++){
            dp[i][j]=dp[i][j-1];
            
            if(i-a[j-1]>=0){
                dp[i][j]=dp[i][j-1]||dp[i-a[j-1]][j-1];
            }
        }
    }
    
    return dp[s/2][n];
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin>>n;

    ll a[n];
    ll i;

    for(i=0;i<n;i++){
        cin>>a[i];
    }

    if(!equal(n,a)){      // Checking the initial array
        cout<<0<<endl;
        exit(0);
    }
  
    // Here we know that after removing the one element the array partitioning is not possible. And hence we need to find this index.
    // Why one element only?
    // If some odd element is present then removing it we are done
    // And if all even elements are there then we divide the elements on both the side by 2 until we find the any odd element.
    // By doing this we are just scaling the sum down.

    for(i=0;i<n;i++){     // In this loop we have tried all the elements and check whether if it is possible or not.
        ll temp=a[i];
        a[i]=0;
        if(!equal(n,a)){    // If not then we will print it
            cout<<1<<endl;
            cout<<i+1<<endl;
            exit(0);
        }
        a[i]=temp;

    }

    return 0;
}
