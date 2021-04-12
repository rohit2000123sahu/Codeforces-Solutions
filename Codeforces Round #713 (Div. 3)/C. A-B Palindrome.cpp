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
        ll a,b;
        cin>>a>>b;

        string s;
        cin>>s;

        ll i;
        ll n =s.size();
        bool flag=true;

        ll ta=0;      // Count of zeroes
        ll tb=0;      // Count of ones
      
        // Approach is that if either s[i] or s[n-i-1] is 1 or 0 then the other one should be equal else it will not be the palindrome


        for(i=0;i<n/2;i++){
            if(s[i]=='1'){
                if(s[i]!=s[n-i-1]){
                    if(s[n-i-1]=='?'){
                        s[n-i-1]='1';
                    }else{
                        flag=false;
                        break;
                    }
                }
                tb+=2;
            }else if(s[i]=='0'){
                if(s[i]!=s[n-i-1]){
                    if(s[n-i-1]=='?'){
                        s[n-i-1]='0';
                    }else{
                        flag=false;
                        break;
                    }
                }
                ta+=2;
            }else if(s[i]=='?' && s[n-i-1]!='?'){
                if(s[n-i-1]=='1'){
                    s[i]='1';
                    tb+=2;
                }else if(s[n-i-1]=='0'){
                    s[i]='0';
                    ta+=2;
                }
            }
        }

        if(n%2!=0){               // IF lenth is odd then we need to set the middle one also
            if(s[n/2]=='1'){
                tb++;
            }else if(s[n/2]=='0'){
                ta++;
            }
        }

        if(ta>a || tb>b){
            flag=false;
        }

        if(flag==false){
            cout<<-1<<endl;
            continue;
        }

        // cout<<ta<<" "<<tb<<endl;

        for(i=0;i<n/2;i++){
            if(s[i]=='?'){
                if(ta+2<=a){
                    s[i]='0';
                    s[n-i-1]='0';
                    ta+=2;
                }else if(tb+2<=b){
                    s[i]='1';
                    s[n-i-1]='1';
                    tb+=2;
                }else{
                    flag=false;
                    break;
                }
            }
        }

        if(s[n/2]=='?'){
            if(ta<a){
                s[n/2]='0';
            }else if(tb<b){
                s[n/2]='1';
            }else{
                flag=false;
                break;
            }
        }

        if(flag==false){
            cout<<-1<<endl;
        }else{
            cout<<s<<endl;
        }
    }

    return 0;
}
