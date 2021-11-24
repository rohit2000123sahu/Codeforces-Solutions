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
        ll n, a, b;
        cin >> n >> a >> b;

        bool flag[n + 1];
        memset(flag, false, sizeof(flag));

        ll arr[n + 1];

        arr[1] = a;
        arr[n / 2 + 1] = b;

        flag[a] = true;
        flag[b] = true;

        ll num = n;
        ll i = 2;
        while (i <= n / 2)
        {
            if (flag[num])
            {
                num--;
                continue;
            }
            arr[i] = num;
            flag[num] = true;
            num--;
            i++;
        }

        i = n / 2 + 2;
        while (i <= n)
        {
            if (flag[num])
            {
                num--;
                continue;
            }
            arr[i] = num;
            flag[num] = true;
            num--;
            i++;
        }

        bool ans = false;
        for (i = 1; i <= n / 2; i++)
        {
            if (arr[1] > arr[i])
            {
                ans = true;
                break;
            }
        }

        for (i = n / 2 + 1; i <= n; i++)
        {
            if (arr[n / 2 + 1] < arr[i])
            {
                ans = true;
                break;
            }
        }

        if (ans)
        {
            cout << "-1" << endl;
            continue;
        }

        for (i = 1; i <= n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
