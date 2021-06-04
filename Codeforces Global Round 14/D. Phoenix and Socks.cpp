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
        ll n, l, r;
        cin >> n >> l >> r;

        vl tl, tr;
        ll i, temp;

        for (i = 0; i < n; i++)
        {
            cin >> temp;
            if (i < l)
            {
                tl.pb(temp);
            }
            else
            {
                tr.pb(temp);
            }
        }

        sort(all(tl));
        sort(all(tr));

        vl left, right;

        ll j;
        i = j = 0;

        while (i < l && j < r)
        {
            if (tl[i] == tr[j])
            {
                i++;
                j++;
            }
            else if (tl[i] > tr[j])
            {
                right.pb(tr[j]);
                j++;
            }
            else
            {
                left.pb(tl[i]);
                i++;
            }
        }

        while (i < l)
        {
            left.pb(tl[i]);
            i++;
        }

        while (j < r)
        {
            right.pb(tr[j]);
            j++;
        }

        l = left.size();
        r = right.size();

        // cout << l << " " << r << endl;

        if (l == r)
        {
            cout << l << endl;
        }
        else if (l > r)
        {
            map<ll, ll> cl;

            for (i = 0; i < l; i++)
            {
                cl[left[i]]++;
            }

            ll ans = 0;
            ll extra = l - r;

            for (auto c : cl)
            {
                ll to_remove = min(extra, (c.S / 2) * 2);
                ans += to_remove / 2;
                extra -= to_remove;
            }

            ans += r + extra;

            cout << ans << endl;
        }
        else
        {
            map<ll, ll> cr;

            for (i = 0; i < r; i++)
            {
                cr[right[i]]++;
            }

            ll ans = 0;
            ll extra = r - l;

            for (auto c : cr)
            {
                ll to_remove = min(extra, (c.S / 2) * 2);
                ans += to_remove / 2;
                extra -= to_remove;
            }

            ans += l + extra;

            cout << ans << endl;
        }
    }

    return 0;
}
