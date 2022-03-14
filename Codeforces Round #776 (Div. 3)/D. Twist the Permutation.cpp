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

void reverse_right_cyclic_shift(vector<ll> &vect, ll shift, ll pos)
{
    vector<ll> new_vect(pos + 1);
    for (ll i = pos; i >= 0; i--)
    {
        if (i - shift >= 0)
        {
            new_vect[i - shift] = vect[i];
        }
        else
        {
            new_vect[pos + 1 + i - shift] = vect[i];
        }
    }

    for (ll i = pos; i >= 0; i--)
    {
        vect[i] = new_vect[i];
    }
    return;
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

        vector<ll> vect(n);
        ll i;

        for (i = 0; i < n; i++)
        {
            cin >> vect[i];
        }

        vector<ll> d(n, 0);

        for (i = n - 1; i >= 0; i--)
        {
            ll shift = 0;
            for (ll j = 0; j < i; j++)
            {
                if (vect[j] == i + 1)
                {
                    shift = j + 1;
                    break;
                }
            }
            d[i] = shift;
            reverse_right_cyclic_shift(vect, shift, i);
        }

        for (i = 0; i < n; i++)
        {
            if (vect[i] != i + 1)
            {
                break;
            }
        }

        if (i == n)
        {
            for (auto c : d)
            {
                cout << c << " ";
            }
            cout << endl;
        }
        else
        {
            cout << "-1" << endl;
        }
    }

    return 0;
}
