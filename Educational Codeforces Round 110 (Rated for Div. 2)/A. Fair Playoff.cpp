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

    ll T;
    cin >> T;

    while (T--)
    {
        ll s[4];
        ll i;

        for (i = 0; i < 4; i++)
        {
            cin >> s[i];
        }

        ll first_max = 0, first_ind = -1;
        ll sec_max = 0, sec_ind = -1;

        for (i = 0; i < 4; i++)
        {
            if (s[i] > first_max)
            {
                sec_max = first_max;
                sec_ind = first_ind;
                first_max = s[i];
                first_ind = i;
            }
            else if (s[i] > sec_max)
            {
                sec_max = s[i];
                sec_ind = i;
            }
        }

        // cout << first_ind << " " << sec_ind << endl;

        if ((first_ind == 0 || first_ind == 1) && (sec_ind == 2 || sec_ind == 3))
        {
            cout << "YES" << endl;
        }
        else if ((sec_ind == 0 || sec_ind == 1) && (first_ind == 2 || first_ind == 3))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
