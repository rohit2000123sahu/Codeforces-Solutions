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

        string s;
        cin >> s;

        set<string> dict;

        ll i, j;

        for (i = 0; i < n; i++)       // We will generate all the substrings and store in the set
        {
            string temp;
            for (j = i; j < n; j++)
            {
                temp += s[j];
                dict.insert(temp);
            }
        }

        queue<string> q;

        q.push("");

        bool done = false;

        while (1)             // Now we will use the BFS and will generate the string in the lexiographical order and will check if it is present in the set or not
        {
            string temp = q.front();    // it is the whole BFS code nothing new
            q.pop();

            for (i = 0; i < 26; i++)
            {
                string new_temp = temp + char(i + 'a');
                if (dict.find(new_temp) == dict.end())
                {
                    cout << new_temp << endl;
                    done = true;
                    break;
                }
                else
                {
                    q.push(new_temp);
                }
            }
            if (done)
            {
                break;
            }
        }
    }
}
