#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

void solve()
{
    ll n;
    cin>>n;

    vector< ll > vect(n);
    ll i;

    for(i=0;i<n;i++){
        cin>>vect[i];
    }

    for(i=2;i<n;i++){
        if(vect[i]%2!=vect[i-2]%2){
            break;
        }
    }

    if(i!=n){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
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
        solve();
    }

    return 0;
}
