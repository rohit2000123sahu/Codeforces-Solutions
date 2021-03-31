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
        ll n, width;
        cin>>n>>width;

        ll i;
        vl vect;

        for(i=0;i<n;i++){
            ll temp;
            cin>>temp;
            vect.pb(temp);
        }

        sort(vect.begin(),vect.end(),greater< ll > ());   // Sort in the decreasing order

        multiset< ll > m;   // This will store the lengths that are available 

        ll level=0;
        i=0;
        while(i<n){
            ll curr = vect[i];
            auto itr = m.lower_bound(curr);   // Now we will find the value in the available lengths 
            if(itr==m.end()){
                level++;      // If we do not find any then we need to increase the level
                if(width-curr>0){
                    m.insert(width-curr);
                }
            }else{
                ll left = *itr-curr;    // If we find the any length which is just greater than or equal to the curr length then update it in our multiset
                m.erase(itr);
                if(left>0){
                    m.insert(left);   
                }
            }
            i++;
        }
        
        cout<<level<<endl;

    }

    return 0;
}
