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

        sort(vect.begin(),vect.end());

        set< pair< ll ,ll > >s;     

        for(i=0;i<m;i++){             // Our answer is th first m values and rest is the implementation
            s.insert(mp(vect[i],i));
        }

        bool done[m];

        memset(done,false,sizeof(done));

        for(i=0;i<n;i++){
            bool visited[m];
            memset(visited,false,sizeof(visited));
            multiset<ll> ms;
            for(auto c: b[i]){
                ms.insert(c);
            }

            for(auto c: s){
                ll val=c.first;
                ll ind=c.second;

                auto itr = ms.find(val);

                if(itr!=ms.end() && !done[ind]){
                    b[i][ind]=val;
                    ms.erase(itr);
                    done[ind]=true;
                    visited[ind]=true;
                }
            }

            for(j=0;j<m;j++){
                if(!visited[j]){
                    b[i][j]=*ms.begin();
                    visited[j]=true;
                    ms.erase(ms.begin());
                }
            }

        }

        for(i=0;i<n;i++){
            for(j=0;j<m;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        }
        
    }

    return 0;
}
