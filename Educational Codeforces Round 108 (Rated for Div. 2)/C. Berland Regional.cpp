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

        for(i=0;i<n;i++){
            m[uni[i]].pb(st[i]);
        }

        set< ll > left;

        for(auto c: m){
            left.insert(c.first);
            // vl new_temp;
            // for(auto d:c.second){
            //     new_temp.pb(d);
            // }

            // sort(all(new_temp));

            sort(all(m[c.first]));
            
        }

        // for(auto c: m){
        //     for(auto d:c.second){
        //         cout<<d<<" ";
        //     }

        //     cout<<endl;
        // }

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
                    // cout<<len<<endl;
                    // cout<<submi[c][len-1]<<endl;
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
