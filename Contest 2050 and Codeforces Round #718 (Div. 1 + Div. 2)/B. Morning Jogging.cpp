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
        ll n,m;
        cin>>n>>m;

        ll b[n][m];

        ll i,j;

        vl vect;
        
        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cin>>b[i][j];
                vect.pb(b[i][j]);
            }
        }

        sort(vect.begin(),vect.end());      // We will insert all the values in the vector and sort in the ascending order

        set< pair< ll ,ll > >s;         

        for(i=0;i<m;i++){             // As we need to find the minimum answer therefore we need to take the first m smallest values and will arrange each of them in every column
            s.insert(mp(vect[i],i));
        }

        bool done[m];                   // This representing which column has assigned the minimum value 

        memset(done,false,sizeof(done));

        for(i=0;i<n;i++){
            bool visited[m];
            memset(visited,false,sizeof(visited));
            multiset<ll> ms;
            for(auto c: b[i]){
                ms.insert(c);
            }

            for(auto c: s){                     // Now we are just checking if the minimum value is present in this row or not
                ll val=c.first;                 
                ll ind=c.second;

                auto itr = ms.find(val);

                if(itr!=ms.end() && !done[ind]){        // if yes and the column has not been done yet then we will assign this value to it 
                    b[i][ind]=val;
                    ms.erase(itr);
                    done[ind]=true;
                    visited[ind]=true;
                }
            }

            for(j=0;j<m;j++){                           // After peerforming all the values that are presented we will put the rest of the values in the mat
                if(!visited[j]){
                    b[i][j]=*ms.begin();
                    visited[j]=true;
                    ms.erase(ms.begin());
                }
            }

        }
    
        for(i=0;i<n;i++){                               // Finally printing the answer
            for(j=0;j<m;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }

    return 0;
}
