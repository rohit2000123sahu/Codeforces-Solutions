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
        ll n,l,r,sum;
        cin>>n>>l>>r>>sum;

        ll a[n+1];

        memset(a,-1,sizeof(a));   // This is used to store our permutation

        ll i;

        bool used[n+1];         // This is used to store that which valued has been used or not in the permutation.

        memset(used,false,sizeof(used));

        ll val=1;
        ll curr_sum=0;
        for(i=l;i<=r;i++){      // Setting Initial permutation to 1,2,3,...,r-l+1
            a[i]=val;
            used[val]=true;
            curr_sum+=val;
            val++;
        }

        ll minimum_sum = ((r-l+1)*(r-l+2))/2;   // This is the minimum sum that can be obtained by having increasing permutaion, starting from 1 (1,2...)
        ll maximum_sum =0;

        val=n;
        for(i=l;i<=r;i++){                    // Maximum sum by having the decreasing permutation, starting from n (n,n-1,n-2 ...)
            maximum_sum+=val;
            val--;
        }

        if(sum<minimum_sum || sum>maximum_sum ){      // The value of sum shoudl lie in between these two values otherwise the answer is -1
            cout<<"-1"<<endl;
            continue;
        }

        // From here the main part of the problem comes
        // Now we will scan the array from r to l and will try to maximize each value such that our curr_sum do not exceed our given sum
        for(i=r;i>=l;i--){
            for(ll j=n;j>=1;j--){
                if(curr_sum+j-a[i]<=sum && j>a[i] && !used[j] ){
                    curr_sum+=j-a[i];
                    used[j]=true;
                    used[a[i]]=false;
                    a[i]=j;
                    break;
                }
            }
            if(curr_sum==sum){
                break;
            }
        }

        if(curr_sum!=sum){
            cout<<"-1"<<endl;
            continue;
        }

        for(i=1;i<=n;i++){                // Finally if we got our permutation from l to r then we will also set the other number in the array
            if(a[i]==-1){
                for(ll j=1;j<=n;j++){
                    if(!used[j]){
                        a[i]=j;
                        used[j]=true;
                        break;
                    }
                }
            }
        }

        for(i=1;i<=n;i++){            // And finally print it
            cout<<a[i]<<" ";
        }

        cout<<endl;
       
        
    }

    return 0;
}
