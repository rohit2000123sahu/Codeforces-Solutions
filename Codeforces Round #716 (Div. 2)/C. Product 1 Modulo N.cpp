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

ll gcd(ll a, ll b){
    if(b==0){
        return a;
    }

    return gcd(b,a%b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll n;
    cin>>n;

    bool check[n+1];    // For checking whether the number has to be included or not

    ll i;

    memset(check,false,sizeof(check));

    ll prod=1;

    for(i=1;i<n;i++){
        if(gcd(i,n)==1){    // If its gcd with n is 1 then we will include it.
            prod*=i;        // i.e. i and n are co prime then include it
            prod%=n;
            check[i]=true;
        }
    }

    if(prod!=1){          // In the last if the prod mod n is not 1 then it will be something between 1 to n then we will not include it.
        check[prod]=false;  // Not including the prod mod n
    }

    vl vect;      // For storing the answer

    for(i=1;i<n;i++){
        if(check[i]){
            vect.pb(i);
        }
    }

    cout<<vect.size()<<endl;    // Printing the answer

    for(auto c: vect){
        cout<<c<<" ";
    }

    cout<<endl;

    return 0;
}
