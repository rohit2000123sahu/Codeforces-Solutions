// This method is just the compression of earlier solution.
// In the earlier one we are finding the index and index will not exists if it contains all a's
// In this we are just checking if 'a'+s and s+'a' if both are palindrome then no answer else just print the answer
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

bool isPalin(string s){         // Function to check whether the string is palindrome or not
    ll n =s.size();
    ll i;

    for(i=0;i<n/2;i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }

    return true;
}

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
        
        if(!isPalin('a'+s)){
            cout<<"YES"<<endl;
            cout<<'a'+s<<endl;
        }else if(!isPalin(s+'a')){
            cout<<"YES"<<endl;
            cout<<s+'a'<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
