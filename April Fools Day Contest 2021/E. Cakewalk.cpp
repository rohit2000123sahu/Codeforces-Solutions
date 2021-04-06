// In this problem there is not much logic just we need to observe the test cases and to find the solution
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
    
    ll n,m;
    cin>>n>>m;

    vector< string > vect;

    ll i,j;
    for(i=0;i<n;i++){
        string temp;
        cin>>temp;
        vect.pb(temp);
    }

    ll ans=0;
    i=0;
    j=0;

    while(1){
        if(vect[i][j]=='*'){
            ans++;
        }
        if(i==n-1 && j==m-1){
            break;
        }
        else if(i==n-1){
            j++;
        }
        else if(j==m-1){
            i++;
        }
        else if(vect[i][j+1]=='*'){
            j++;
        }else if(vect[i+1][j]=='*'){
            i++;
        }else{
            j++;
        }
    }

    cout<<ans<<endl;

    return 0;
}
