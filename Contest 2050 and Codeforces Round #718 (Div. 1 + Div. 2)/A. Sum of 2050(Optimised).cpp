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

ll sumDig(ll n){      // Funtion for the sum of digits in the numbere n
    ll sum=0;
    
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    
    return sum;
}

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
        
        if(n%2050!=0){      // If n is a multiple of 2050 or not 
            cout<<-1<<endl;   // If not print -1
            continue;
        }
        
        n=n/2050;     // Else we will divide it by 2050 and will try to find the the n as the powers of 10
                      // And it will nothing but the sum of the digits of n because the n is represented the powers of 10 only.
        cout<<sumDig(n)<<endl;
        
    }

    return 0;
}
