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

// In this questions n is always even
// So we can took two numbers x and y
// Basically we can perform 6 operations in this order to convert them into -x and  -y 
// The order is 2,1,1,2,1,1

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll T;
    cin >> T;

    while (T--)
    {
        ll n;
        cin>>n;
        
        ll i;
        ll a[n];
        
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        
        cout<<(6*n)/2<<endl;
        
        for(i=1;i<=n;i+=2){
            cout<<"2 "<<i<<" "<<i+1<<endl;
            cout<<"1 "<<i<<" "<<i+1<<endl;
            cout<<"1 "<<i<<" "<<i+1<<endl;
            cout<<"2 "<<i<<" "<<i+1<<endl;
            cout<<"1 "<<i<<" "<<i+1<<endl;
            cout<<"1 "<<i<<" "<<i+1<<endl;
        }
        
        
    }

    return 0;
}
