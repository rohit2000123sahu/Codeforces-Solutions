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

ll find(string &seq, char c)
{
    ll i;
    for (i = 0; i < seq.size(); i++)
    {
        if (seq[i] == c)
        {
            return i;
        }
    }
    return -1;
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
        string seq;
        cin >> seq;

        ll r, R, g, G, b, B;
        r = find(seq, 'r');
        R = find(seq, 'R');
        g = find(seq, 'g');
        G = find(seq, 'G');
        b = find(seq, 'b');
        B = find(seq, 'B');

        if (r < R && b < B && g < G)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
