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

string generate(string s, ll k)
{
    string temp = s;
    ll n = s.size();
    ll i;
    for (i = 0; i <= (k / n); i++)
    {
        s += temp;
    }

    while (s.size() > k)
    {
        s.pop_back();
    }

    return s;
}

// Simple brute force

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    string prefix = "";
    prefix += s[0];

    string minimum = generate(prefix, k);

    ll i;
    for (i = 1; i < n; i++)
    {
        if (s[i] > s[0])
        {
            break;
        }
        else
        {
            prefix += s[i];
            minimum = min(minimum, generate(prefix, k));
        }
    }

    cout << minimum << endl;

    return 0;
}
