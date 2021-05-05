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

// Just we need to check only one thing in this question that the alphabet should come only at once place (it may come more than one time continuosly)
// Ex- AABBCC is permissible but ABABCC is not permissible because A comes again which should not happen

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

        string s;
        cin>>s;

        ll i=0;

        set< char > st;

        st.insert(s[0]);      // We have initially put s[0] inside the set

        i=1;
        bool flag=false;

        while(i<n){
            while(i<n && s[i]==s[i-1]){     // We are interating till the curr is equal to the previous one 
                i++;
            }

            if(i<n){
                if(st.find(s[i])==st.end()){      // If the next char is not present in the set then insert it 
                    st.insert(s[i]);
                }else{                            // Else make flag true and break the loop 
                    flag=true;
                    break;
                }
            }

            i++;

        }


        if(!flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }


        
    }

    return 0;
}
