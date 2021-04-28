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

ll ans[500][500];

void fill(ll &times,ll num, ll i, ll j){      // Here we are passing times refernce because it may got decremented in several recursions hence it should get reflected
    if(times==0){                             // If times becomes zero then return
        return;
    }

    if(i<0 || j<0){                          // If i and j are not valid then return
        return;
    }

    if(ans[i][j]!=-1){                      // Also if the matrix position already filled then also return 
        return;
    }

    ans[i][j]=num;                         // Ohterwise we will asssign it the num and will decremented the count by 1 
    times--;

    fill(times,num,i,j-1);                // Then at first try the left
    fill(times,num,i+1,j);                // After that try the down

    return;

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin>>n;

    ll i,j;
    memset(ans,-1,sizeof(ans));

    ll a[n];
    ll sum=0;

    for(i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }

    ll maximum=(n*(n+1))/2;

    if(sum>maximum){              // According to this question we not need to check this condition because in this question the sum will always be n*(n-1)/2;
        cout<<-1<<endl;
        exit(0);
    }

    for(i=0;i<n;i++){            // Now we will fill the answer 2d array 
        fill(a[i],a[i],i,i);     // We will fill the matrix first we will try the horizontal and then if count is left then will try the vertical
    }

    for(i=0;i<n;i++){           // For printing out the final answer
        for(j=0;j<=i;j++){
            cout<<ans[i][j]<<" ";
        }

        cout<<endl;
    }



    return 0;
}
