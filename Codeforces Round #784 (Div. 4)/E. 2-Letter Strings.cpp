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
    cin >> n;

    vector<string> vect(n);
    ll i;

    for (i = 0; i < n; i++)
    {
        cin >> vect[i];
    }

    map<int, int> first_place, second_place;
    map<string, int> count;
    ll ans = 0;
    for (i = 0; i < n; i++)
    {
        ans += first_place[vect[i][0] - 'a'];
        ans += second_place[vect[i][1] - 'a'];
        ans -= count[vect[i]] * 2;
        first_place[vect[i][0] - 'a']++;
        second_place[vect[i][1] - 'a']++;
        count[vect[i]]++;
    }
    cout << ans << endl;
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
