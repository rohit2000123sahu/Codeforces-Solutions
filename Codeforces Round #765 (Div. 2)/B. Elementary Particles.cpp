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

bool comp(pair<ll, ll> num1, pair<ll, ll> num2)
{
    if (num1.first == num2.first)
    {
        return num1.second < num2.second;
    }
    return num1.first < num2.first;
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
        cin >> n;

        vector<ll> seq(n);
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> seq[i];
        }

        vector<pair<ll, ll>> seq_ind;
        for (i = 0; i < n; i++)
        {
            seq_ind.push_back({seq[i], i + 1});
        }
        sort(seq_ind.begin(), seq_ind.end(), comp);

        ll ans = -1;
        for (i = 1; i < n; i++)
        {
            if (seq_ind[i].first == seq_ind[i - 1].first)
            {
                ans = max(ans, n - seq_ind[i].second + seq_ind[i - 1].second);
            }
        }

        cout << ans << endl;
    }

    return 0;
}
