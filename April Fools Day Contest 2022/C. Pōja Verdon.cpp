#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define endl '\n'
#define MOD 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    vector<ll> vect(n, 0);
    ll sum = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> vect[i];
        sum += vect[i];
    }
    cout << sum << endl;

    return 0;
}
