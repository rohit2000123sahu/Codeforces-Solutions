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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n;
    cin >> n;

    ll a[n];
    ll i;

    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    priority_queue<ll, vl, greater<ll>> pq;

    ll curr = 0;

    for (i = 0; i < n; i++)
    {
        curr += a[i];
        pq.push(a[i]);

        while (curr < 0)              // When our sum is negative we will remove the most negative element from the array till our sum is negative
        {
            curr = curr - pq.top();
            pq.pop();
        }
    }

    cout << pq.size() << endl;      // This is our answer

    return 0;
}
