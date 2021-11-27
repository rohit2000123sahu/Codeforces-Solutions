#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
typedef unordered_map<ll, ll> uml;
typedef vector<pl> vpl;
typedef map<ll, ll> ml;

ll find_even(ll n){
    vl digits;
    while(n!=0){
        digits.pb(n%10);
        n=n/10;
    }
    
    reverse(digits.begin(),digits.end());
    
    if(digits[0]%2==0){
        return 1;
    }else{
        for(auto c: digits){
            if(c%2==0){
                return 2;
            }
        }
    }
    
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
       ll n;
       cin>>n;
       
       if(n%2==0){
           cout<<0<<endl;
       }else{
           cout<<find_even(n)<<endl;
       }
       
    }

    return 0;
}
