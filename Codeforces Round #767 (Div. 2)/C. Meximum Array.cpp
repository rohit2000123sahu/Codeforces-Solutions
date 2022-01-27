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
        int n;
        cin >> n;
        vector<int> arr(n + 1);
        vector<int> freq(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        int mex = n + 1;
        for (int i = 0; i <= n; i++)
        {
            if (freq[i] == 0)
            {
                mex = i;
                break;
            }
        }
        vector<int> ans;
        set<int> s;
        for (int i = 1; i <= n; i++)
        {
            if (s.size() == 0)
            {
                ans.push_back(mex);
                for (int i = 0; i < mex; i++)
                {
                    s.insert(i);
                }
            }
            freq[arr[i]]--;
            if (s.find(arr[i]) != s.end())
                s.erase(arr[i]);
            if (freq[arr[i]] == 0)
            {
                mex = min(mex, arr[i]);
            }
        }
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
