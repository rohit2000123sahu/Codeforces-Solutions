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
        ll n;
        cin >> n;

        string enemy;
        string gregor;

        cin >> enemy >> gregor;

        
        ll i;
        ll ans = 0;
        for (i = 0; i < n; i++)   
        {
            if (gregor[i] == '1')                               // If pawn if there then only three cases is possible
            {
                if (enemy[i] == '0')                            // If enemy pawn is empty then simply replace it
                {
                    ans++;
                    enemy[i] = '2';                             // Here we replaced it new pawn 2 to avoid it replacing again.
                }
                else if (i - 1 >= 0 && enemy[i - 1] == '1')    // If not then try for left pawn
                {
                    ans++;
                    enemy[i - 1] = '2';
                }
                else if (i + 1 < n && enemy[i + 1] == '1')    // After this try for right pawn
                {
                    ans++;
                    enemy[i + 1] = '2';
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
