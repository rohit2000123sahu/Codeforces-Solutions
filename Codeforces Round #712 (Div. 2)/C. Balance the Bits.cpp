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
        ll n,i;
        cin>>n;

        string s;
        cin>>s;

        if(s[0]=='0' || s[n-1]=='0'){     // If first or last are zero then it is not possible to have valid string
            cout<<"NO"<<endl;
            continue;
        }

        ll zero=0;
        ll one=0;

        for(i=0;i<n;i++){
            if(s[i]=='0'){
                zero++;
            }else{
                one++;
            }
        }

        if(one%2!=0){             // The count of one and zero should be even otherwise we will get opposite brackets odd times ( count of zero is odd ) then it is not possible
            cout<<"NO"<<endl;
            continue;
        }

        cout<<"YES"<<endl;      // If all above is satisfied then answer exits

        string a,b;

        ll open=0;

        for(i=0;i<n;i++){   // Creating the empty string
            a+='.';
            b+='.';
        }

        bool flag=true;
        for(i=0;i<n;i++){     // Filling the bracket sequence for zero alternatively
            if(s[i]=='0'){
                if(flag){
                    a[i]='(';
                    b[i]=')';
                    flag=false;
                    open++;
                }else{
                    a[i]=')';
                    b[i]='(';
                    flag=true;
                }
            }
        }

        for(i=0;i<n;i++){       // After that filling sequence for one
            if(s[i]=='1'){
                if(open<n/2){   // Open count is less than n/2 then open bracket eles close bracket
                    a[i]='(';
                    b[i]='(';
                    open++;
                }else{
                    a[i]=')';
                    b[i]=')';
                }
            }
        }


        cout<<a<<endl;      // Finally print the answer
        cout<<b<<endl;
    }

    return 0;
}
