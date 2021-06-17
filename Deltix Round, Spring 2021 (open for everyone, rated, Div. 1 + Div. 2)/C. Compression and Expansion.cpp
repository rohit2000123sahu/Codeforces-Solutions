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
        int n;
        cin >> n;
        vector<int> a;        // This would be storing the last number and based on it we will be deciding our next number
        for (int it = 0; it < n; it++)  // In this we will firstly always try to increase number (if possible) and if not then try with removing the number
        {
            int x;
            cin >> x;
            if (x > 1)
            {
                while (!a.empty() && a.back() + 1 != x)
                {
                    a.pop_back();
                }
                assert(!a.empty());
                a.pop_back();
            }
            a.push_back(x);
            for (int j = 0; j < (int)a.size(); j++)
            {
                if (j > 0)
                {
                    cout << ".";
                }
                cout << a[j];
            }
            cout << '\n';
        }
    }

    return 0;
}
