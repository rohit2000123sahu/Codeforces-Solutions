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
    
    ll T;
    cin>>T;

    while(T--){
        ll n;
        cin>>n;

        ll index=-1;

        ll i;

        // Remember do not iterate upto n in this loop because it may go out of bound for some test cases having odd value of n
        for(i=1;i<=n-1;i+=2){                           // Using this loop we are trying to find the maximum element in the permutation
            cout<<"? 1 "<<i<<" "<<i+1<<" "<<n-1<<endl;
            cout.flush();

            ll res;
            cin>>res;

            if(res==n){                             // If the response is n then our maximum element is at index i+1
                index=i+1;                          // It is because we have asked the query in this way
                break;
            }else if(res==n-1){                     // If it is n-1 then based on our query the maximum element could be at ith index or not present
                cout<<"? 1 "<<i+1<<" "<<i<<" "<<n-1<<endl;  // So again we will ask the query in swapped manner
                cout.flush();

                cin>>res;
                if(res==n){                         // Same as above
                    index=i;
                    break;
                }
            }
            
        }

        if(index==-1){          // Case when n is odd and max element is at nth index then index will be -1
            index=n;            // It is because we are iterating in above loop and increment is of +2 hence the last element will be left for checking
        }

        ll per[n+1];           // Setting the permutation of the index
        per[index]=n;

        for(i=1;i<=n;i++){     // In this loop we will find the individual permutation using query of type 2
            if(i==index){
                continue;
            }
            cout<<"? 2 "<<i<<" "<<index<<" "<<1<<endl;
            cout.flush();

            cin>>per[i];
        }

        cout<<"! ";            // Finally printing the output
        cout.flush();
        
        for(i=1;i<=n;i++){
            cout<<per[i]<<" ";
            cout.flush();
        }


    }

    return 0;
}
