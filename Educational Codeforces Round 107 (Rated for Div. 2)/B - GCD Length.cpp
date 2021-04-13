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

ll solve(ll c){     // For getting the value of gcd(x,y) having c digit
    ll ans=0;       // For example for c=2 answer would be 11;
    while(c>0){
        ans=ans*10+1;
        c--;
    }
    return ans;
}

ll digits(ll y){    // For getting the digits in a number
    ll ans=0;
    while(y!=0){
        y=y/10;
        ans++;
    }

    return ans;
}

bool isTrue(ll y, ll b){
    ll dig = digits(y);
    if(dig==b){
        return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    ll t;
    cin>>t;

    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;

        ll num = solve(c);    // Getting the gcd(x,y) having the digits c

        ll x=num;
        ll y =num;
        ll i;

        for(i=c+1;i<=a;i++){     // We are increaing the digits of x by multiplying it by 10;
            x=x*10;
        }

        while(isTrue(y,b)){       // We are increaing the digits of y by multiplying it with 9 and to check how many times we have to multiply we have implemented it by brute force
            y=y*9;
        }

        cout<<x<<" "<<y<<endl;
        
    }

    return 0;
}
