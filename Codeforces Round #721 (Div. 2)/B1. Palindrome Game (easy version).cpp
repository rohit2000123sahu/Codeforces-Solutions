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

        string s;
        cin>>s;

        ll i;
        ll count=0;

        for(i=0;i<n;i++){
            if(s[i]=='0'){
                count++;
            }
        }

        if(count%2==0){            // If zeores are even then we can prove bob will always win
            cout<<"BOB"<<endl;
        }else{                    
            if(count!=1){         // If count is not 1 and it is odd then 0 is also present at mid jence alice then select that 0 and will always wins using the strategy the bob used above 
                cout<<"ALICE"<<endl;
            }else{
                cout<<"BOB"<<endl;
            }
        }
    }

    return 0;
}
