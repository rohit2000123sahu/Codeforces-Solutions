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

ll n,k;
ll cur[26];
vector<char> path;

void dfs(ll v){
    while(cur[v]<k){
        ll u = cur[v]++;
        dfs(u);
        path.pb(u+'a');
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    cin>>n>>k;

    dfs(0);

    cout<<'a';

    for(ll i=0;i<n-1;i++){
        cout<<path[i%path.size()];
    }

    

    return 0;
}
