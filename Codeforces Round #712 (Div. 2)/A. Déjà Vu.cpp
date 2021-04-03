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
        string s;
        cin>>s;

        ll i;
        ll n=s.size();
        ll index=-1;
        // In this we will check and try to find the first position which is not palindrome i.e. s[i]==s[n-i-1]
        for(i=0;i<n/2;i++){
            if(s[i]==s[n-i-1] && s[i]=='a'){    
                continue;
            }else{
                if(s[n-i-1]=='a'){  // We have one additional condition here because here we are inserting new a at s[i] if s[n-i-1] is a then we should place new a  at s[n-i-1]
                    index=n-i-1;
                }else{
                    index=i;        // Else simply add new a at i
                }
                break;
            }
        }


        if(index==-1){        // If we have not find any position then
            if(n%2==0){       // If length is even then answer is NO
                cout<<"NO"<<endl;
                continue;
            }

            if(n%2!=0 && s[n/2]=='a'){    // Else we need to check that if that middle character is a or not. If it is 'a' then solution does not exits 
                cout<<"NO"<<endl;
                continue;
            }else{
                index=n/2;              //Else solution exits
            }
        }

        cout<<"YES"<<endl;          // Rest is just printing the solution

        string ans;
        // Here index is storing the value at which we should add the new character 'a'.
        for(i=0;i<n;i++){
            if(i!=index){
                ans+=s[i];
            }else{
                ans+='a';
                ans+=s[i];
            }
        }

        cout<<ans<<endl;

    }

    return 0;
}
