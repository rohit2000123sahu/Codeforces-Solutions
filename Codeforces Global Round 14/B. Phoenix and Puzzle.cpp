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

bool check(ll n ,ll val ){      // Function to check whether there exists a square using the given number of triangle or not
    if(n%val!=0){         
        return false;
    }
    n=n/val;

    ll temp=sqrt(n);

    return temp*temp==n;        // Hence we are returning true if the n/val is perfect square else return false.
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

        if(n%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        if(check(n,2) || check(n,4)){     // One square could only be formed by using 2 or 4 triangles only. It is also shown in the sample input output.
            cout<<"YES"<<endl;            // Large sqaures will be made up these small squares only(sqaures using 2 or 4 triangle)
        }else{
            cout<<"NO"<<endl;
        }


    }

    return 0;
}
