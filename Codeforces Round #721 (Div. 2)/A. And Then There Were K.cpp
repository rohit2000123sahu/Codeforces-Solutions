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

        ll temp=n;
        ll len=0;
      
        // If we are at num=17 then at num=16 we got 10000 only one set bit
        // This bit will only unset in num=15 which is 01111 hence we need to go upto the 15 in this case.
        // Hence we can say we can find the length and the answer would be 2^length-1 

        while(temp>0){        //Finding the length
            temp=temp>>1;
            len++;
        }

        ll ans=1;

        ll i;

        for(i=1;i<len;i++){     // Finding the 2^len
            ans=ans*2;
        }
        ans=ans-1;            //Substract 1 from answer

        cout<<ans<<endl;
    }

    return 0;
}
