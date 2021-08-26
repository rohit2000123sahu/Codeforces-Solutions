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
        ll i;

        cin>>n;

        ll q[n];
        
        for(i=0;i<n;i++){
            cin>>q[i];
        }

        priority_queue< ll , vl ,  greater < ll > > pq1;
        priority_queue < ll > pq2;

        ll maximum;

        vl ans1,ans2;

        ans1.pb(q[0]);
        ans2.pb(q[0]);
        maximum=q[0];

        for(i=1;i<q[0];i++){
            pq1.push(i);
            pq2.push(i);
        }

        ll j;

        for(i=1;i<n;i++){
            if(q[i]==q[i-1]){
                ans1.pb(pq1.top());
                ans2.pb(pq2.top());
                pq1.pop();
                pq2.pop();
            }else{
                ans1.pb(q[i]);
                ans2.pb(q[i]);
                for(j=maximum+1;j<q[i];j++){
                    pq1.push(j);
                    pq2.push(j);
                }
                maximum=q[i];
            }
        }

        for(auto c: ans1){
            cout<<c<<" ";
        }
        cout<<endl;

        for(auto c: ans2){
            cout<<c<<" ";
        }
        cout<<endl;


        
    }

    return 0;
}
