// In this we have to use the idea of fibonacci f[n]=f[n-1]+f[n-2]
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
    
    string s;
    cin>>s;

    for(ll i=2;i<s.size();i++){
        ll x = s[i]-'A';
        ll y = s[i-1]-'A';
        ll z = s[i-2]-'A';

        if(x!=(y+z)%26){
            cout<<"NO"<<endl;
            exit(0);
        }
    }

    cout<<"YES"<<endl;

    return 0;
}
