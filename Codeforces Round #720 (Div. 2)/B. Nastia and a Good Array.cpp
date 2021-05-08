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
    
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        ll a[n];
        ll i;

        for(i=0;i<n;i++){
            cin>>a[i];
        }

        if(n==1){                   // Special Case don't forget
            cout<<0<<endl;
            continue;
        }
      
        // In this question we will try to form the array like this
        // P num1 P num2 P num3 P ...
        // Where P is a prime number in our case it is 1e9+7
        // It is because we want the gcd of adjacent to be 1.
        // We will chose num1, num2, num3 ... according to the statement given in the question
      
        vector< vector< ll > > vect;

        for(i=1;i<n;i++){         
            if(i%2!=0){
                vector< ll > temp;
                temp.pb(i);             // Pushing the first index
                temp.pb(i+1);           // Pushing the second index
                temp.pb(MOD);           // Pushing the first index new value i.e. MOD (1e9+7) which is a prime number 
                temp.pb(min(a[i],a[i-1]));  // Second index value would be minimum of a[i] and a[i-1]
                a[i]=min(a[i],a[i-1]);      // Update that value in the array
                vect.pb(temp);              // Finally push the temp in the vector
            }
        }

        if(n%2!=0){                   // If n is odd then based on the above loop the last element would not be considered hence we need to do it manually
            vector<ll> temp;
            temp.pb(n-1);
            temp.pb(n);
            temp.pb(min(a[n-1],a[n-2]));
            temp.pb(MOD);
            vect.pb(temp);
        }

        cout<<vect.size()<<endl;    // Finally printing the result

        for(auto temp: vect){
            for(auto c: temp){
                cout<<c<<" ";
            }
            cout<<endl;
        }
        
    }

    return 0;
}
