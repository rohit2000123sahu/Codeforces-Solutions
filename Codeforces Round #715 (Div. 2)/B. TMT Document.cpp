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

        string s;
        cin>>s;

        ll ct=0,cm=0;   // To count the number of occurances of the T and M
        bool flag=true;  

        for(auto c: s){
            if(c=='T'){
                ct++;
            }else{
                cm++;
            }

            if(cm>ct){        // If at any point of time the count of M increase the count of T then it is impossible
                flag=false;
            }
        }

        ct=0;
        cm=0;
      
        // We have to check the same thing in the reverse order also because from the above loop we miss the test case like TTM
        // If we have only one above condition then TTM will be a valid solution for this problem But it is not.
        // Hence we need to check it from back also

        for(ll i=n-1;i>=0;i--){   // Checking the same from the back
            if(s[i]=='T'){
                ct++;
            }else{
                cm++;
            }

            if(cm>ct){
                flag=false;
            }
        }

        if(ct!=2*cm || !flag){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
        
    }

    return 0;
}
