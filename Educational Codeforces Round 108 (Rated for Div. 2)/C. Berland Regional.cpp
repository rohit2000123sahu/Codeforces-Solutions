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

        map< ll , vl > m;

        ll i;
        ll uni[n],st[n];
        ll sum=0;

        for(i=0;i<n;i++){
            cin>>uni[i];
        }

        for(i=0;i<n;i++){
            cin>>st[i];
            sum+=st[i];
        }
        
        // The main concept in this problem is that the when the teams will be divided in the a particular size then some of the part will be remained and we nned to remoe that sum
        // from the total.
        
        // Rest is the implementation part.
        
        // One more thing is that the code complexity looks like O(n2) but it is O(nlogn).
        // It is because we have made the data segregated.

        for(i=0;i<n;i++){
            m[uni[i]].pb(st[i]);
        }

        set< ll > left;

        for(auto c: m){
            left.insert(c.first);    

            sort(all(m[c.first]));
            
        }

        map< ll , vl > submi;

        for(auto c: m){
            ll temp=0;
            for(auto d: c.second){
                temp+=d;
                submi[c.first].pb(temp);
            }
        }

        ll ans[n]={0};

        ll total_remove=0;
        
        for(i=0;i<n;i++){
            if(left.empty()){
                break;
            }
            ll temp=total_remove;
            vl to_remove;
            for(auto c: left){
                ll len=(submi[c].size())%(i+1);
                if(len!=0){
                    temp+=submi[c][len-1];
                }

                if(i+1==submi[c].size()){
                    total_remove+=submi[c][submi[c].size()-1];
                    to_remove.pb(c);
                }
            }

            for(auto c: to_remove){
                left.erase(left.find(c));
            }

            ans[i]=sum-temp;

        }


        for(auto c: ans){
            cout<<c<<" ";
        }

        cout<<endl;

    }

    return 0;
}
