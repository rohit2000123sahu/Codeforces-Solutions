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
        ll n;
        cin>>n;

        ll i;
        ll x=0;

        ll a[n];
        for(i=0;i<n;i++){
            cin>>a[i];
            x=x^a[i];
        }

                    
        if(x==0){
            cout<<"YES"<<endl;        // If xor of all elements is zero then it is always possible
        }else{
            ll temp=0;                // If not then the case could be where the gruops are formed but they are odd in number Ex - 2,2,2 Here answer is yes but xor is not zero
            ll count=0;
            for(i=0;i<n;i++){         // Now we will assume our group having xor equal to the x
                temp=temp^a[i];
                if(temp==x){          
                    temp=0;           // We are resetting the temp to zero 
                    count++;          // We are increasing the count by 1
                }
            }

            if(temp==0 && count>=2){    // If finally temp is zero and count is greater than 2 then we got our answer
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        
    }

    return 0;
}
