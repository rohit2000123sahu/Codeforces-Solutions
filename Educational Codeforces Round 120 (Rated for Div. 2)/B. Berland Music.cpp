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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        vector<ll> p(n);
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> p[i];
        }

        string s;
        cin >> s;

        vector<pair<ll, ll>> liked, disliked;
        for (i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                liked.push_back({p[i], i});
            }
            else
            {
                disliked.push_back({p[i], i});
            }
        }

        sort(liked.begin(), liked.end(), greater<pair<ll, ll>>());
        sort(disliked.begin(), disliked.end(), greater<pair<ll, ll>>());

        ll rating = n;

        vector<ll> q(n);
        
        // We will separate liked and disliked songs and sort them in decreasing order.
        // After that we will assign the rating to the liked one in decreasing one and then to disliked one.

        for (i = 0; i < liked.size(); i++)
        {
            q[liked[i].second] = rating;
            rating--;
        }

        for (i = 0; i < disliked.size(); i++)
        {
            q[disliked[i].second] = rating;
            rating--;
        }

        for (auto c : q)
        {
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
