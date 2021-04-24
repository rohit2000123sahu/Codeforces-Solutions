// This question can be easily solved by the brute force

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

ll len(ll n){       // To get the number of digits in the n
    ll count=0;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}

ll get(ll digits){      // To get the highest 2050*(10^n) number possible 
    ll num = 2050;
    while(digits>4){
        num*=10;
        digits--;
    }

    return num;
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

        ll ans=0;

        while(len(n)>=4){       // We will loop through till the length is greater than or equal to 4
            ll digits = len(n);
            ll num = get(digits);

            if(n-num>=0){       // If the num we have calculated is smaller than n then substract
                n-=num;
            }else{              // Else we will substract num/10 from n
                n-=num/10;
            }
            ans++;              // Each time answer will increase by 1
        }

        if(n==0){               // Finally if n is zero then print the answer
            cout<<ans<<endl;
        }else{                  // Else answer will be -1;
            cout<<"-1"<<endl;
        }   


        
    }

    return 0;
}
