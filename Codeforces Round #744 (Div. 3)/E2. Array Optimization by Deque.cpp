#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

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
typedef pair<ll, ll> node;
typedef unordered_map<ll, ll> uml;
typedef tree<node, null_type, less<node>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;

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
        ordered_set s;
        ll cnt=0;
        for (ll i = 0; i < n; i++) {
            ll a;
            cin >> a;
            ll less = s.order_of_key(node(a, 0));
            ll greater = i - s.order_of_key(node(a, n));
            cnt += min(less, greater);
            s.insert(node(a, i));
        }
        cout << cnt << '\n';
    }

    return 0;
}
