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
    
    ll n,q;
    cin>>n>>q;

    ll i;
    ll color[n+1];

    for(i=1;i<=n;i++){
        cin>>color[i];
    }

    ll a[51];     // This array contains the first position for all the color 1 to 50 if present else -1 

    memset(a,-1,sizeof(a));

    for(i=1;i<=n;i++){        // Setting the first postion of colors
        if(a[color[i]]==-1){
            a[color[i]]=i;
        }
    }


    while(q--){
        ll c;
        cin>>c;

        cout<<a[c]<<" ";    // Output the answer
        // Now we need to move that ball in the front as a result of this the ball from position 1 to position of that ball will be shifted by 1
        // In this loop we have done this only
        for(i=1;i<=50;i++){   
            if(a[i]!=-1 && a[i]<a[c]){      // If the color is present and postion of curr is less than the position of the chosen ball
                a[i]+=1;
            }
        }
        a[c]=1;   // Lastly setting this ball position to 1

    }

    return 0;
}
