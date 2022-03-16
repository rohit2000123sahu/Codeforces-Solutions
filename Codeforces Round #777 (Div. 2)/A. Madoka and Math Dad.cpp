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

    // To maximize the decimal number and according to the condition we will break the number in the two's and one's.
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        ll count_1 = 0, count_2 = 0;
        while (n > 0)
        {
            if (n >= 2)
            {
                count_2++;
                n -= 2;
            }
            if (n >= 1)
            {
                count_1++;
                n -= 1;
            }
        }

        // After breaking the number we will arrange it such that the given condition i.e. no two consecutive numbers are same.
        string ans;
        if (count_2 >= count_1)
        {
            while (count_2 || count_1)
            {
                if (count_2)
                {
                    ans += '2';
                    count_2--;
                }
                if (count_1)
                {
                    ans += '1';
                    count_1--;
                }
            }
        }
        else
        {
            while (count_2 || count_1)
            {
                if (count_1)
                {
                    ans += '1';
                    count_1--;
                }
                if (count_2)
                {
                    ans += '2';
                    count_2--;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
