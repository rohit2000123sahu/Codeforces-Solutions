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

        string a,b,c;
        cin>>a>>b>>c;

        ll p1=0,p2=0,p3=0;
        
        string ans;

        while(p1<2*n && p2<2*n && p3<2*n){
            if(a[p1]==b[p2]){
                ans+=a[p1];
                p1++;
                p2++;
            }else if(b[p2]==c[p3]){
                ans+=b[p2];
                p2++;
                p3++;
            }else{
                ans+=a[p1];         //p1 and p3
                p1++;
                p3++;
            }
        }

        // At this stage any one of our string got completly in the ans
        // Let our answer have k characters in it

        // Other two strings must have advanced by 2*k-2*n  (total advancement-string that got completly in ans)

        // So in the worst case both have advanced by k-n

        // So the characters left would be 2*n-(k-n)        (total-advanced)
        // Which is equal to 3*n-k Left in worst case;

        // Our answer has already k characters in it 
        // Hence total characters would we 3*n-k+k
        // Which is nothing but 3*n
        // Hurray we got max 3*n length in worst case

        if(p1==2*n){    // If string one got completly in the ans
            if(p2>p3){  // If p2 is more than we will add remaining p2 characters in the ans
                while(p2<2*n){          // Doing the same
                    ans+=b[p2];
                    p2++;
                }
            }else{
                while(p3<2*n){      // if both advanced by same or p3 advance more
                    ans+=c[p3];
                    p3++;
                }
            }
        }else if(p2==2*n){      // Same as above
            if(p1>p3){
                while(p1<2*n){
                    ans+=a[p1];
                    p1++;
                }
            }else{      
                while(p3<2*n){
                    ans+=c[p3];
                    p3++;
                }
            }
        }else{          // Same as above
            if(p1>p2){
                while(p1<2*n){
                    ans+=a[p1];
                    p1++;
                }
            }else{
                while(p2<2*n){
                    ans+=b[p2];
                    p2++;
                }
            }
        }

        cout<<ans<<endl;

        
    }

    return 0;
}
