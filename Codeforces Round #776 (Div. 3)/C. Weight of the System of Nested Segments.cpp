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

bool comp(pair<ll, ll> p1, pair<ll, ll> p2)
{
    if (p1.second == p2.second)
    {
        return p1.first < p2.first;
    }
    return p1.second < p2.second;
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
        ll n, m;
        cin >> n >> m;

        ll i;
        vector<pair<ll, ll>> input(m); // index, weight
        map<ll, ll> mp;
        for (i = 0; i < m; i++)
        {
            cin >> input[i].first >> input[i].second;
            mp[input[i].first] = i + 1;
        }

        sort(input.begin(), input.end(), comp);

        vector<pair<ll, ll>> filtered_vector(2 * n);

        ll total_weight = 0;
        for (i = 0; i < 2 * n; i++)
        {
            total_weight += input[i].second;
            filtered_vector[i] = input[i];
        }

        sort(filtered_vector.begin(), filtered_vector.end());

        cout << total_weight << endl;
        for (i = 0; i < n; i++)
        {
            cout << mp[filtered_vector[i].first] << " " << mp[filtered_vector[2 * n - 1 - i].first] << endl;
        }

        cout << endl;
    }

    return 0;
}
