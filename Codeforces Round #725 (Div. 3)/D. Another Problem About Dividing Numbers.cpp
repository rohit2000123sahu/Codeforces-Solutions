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
#define MAX 50000
typedef vector<ll> vl;
typedef pair<ll, ll> pl;
typedef unordered_map<ll, ll> uml;
typedef vector<pl> vpl;
typedef map<ll, ll> ml;

vector<ll> prime;

void preCompute()                             // This will compute all the prime numbers upto 50000
{                                             // It is because n<1e9 and sqrt(n) < 50000 hence for finding all prime factors of n will be less than 50000 hence we can find our answer easily
    bool isPrime[MAX];
    memset(isPrime, true, sizeof(isPrime));

    for (int i = 2; i * i <= MAX; i++)
    {
        if (isPrime[i])
        {
            for (int j = i * i; j <= MAX; j += i)
            {
                isPrime[j] = false;
            }
        }
    }

    for (int i = 2; i <= MAX; i++)
    {
        if (isPrime[i])
        {
            prime.push_back(i);
        }
    }

    return;
}

ll prime_factors(ll num)
{
    // Decompose num

    if (num == 1)
    {
        return 0;
    }

    bool flag = false;
    int count = 0;

    for (auto c : prime)
    {
        if (c * c > num)
        {
            break;
        }
        while (num % c == 0)
        {
            flag = true;
            num = num / c;
            count++;
        }
    }

    if (num > 2)
    {
        count++;
    }

    if (!flag)
    {
        return 1;
    }
    else
    {
        return count;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    preCompute();

    int T;
    cin >> T;

    while (T--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int maximum = 0;

        // cout << prime_factors(a) << " " << prime_factors(b) << endl;

        maximum += prime_factors(a);
        maximum += prime_factors(b);

        if (k >= 2 && k <= maximum)
        {
            cout << "YES" << endl;
        }
        else if (k == 1)
        {
            if (a == b)
            {
                cout << "NO" << endl;
            }
            else
            {
                ll gcd = __gcd(a, b);
                if (gcd == a || gcd == b)
                {
                    cout << "YES" << endl;
                }
                else
                {
                    cout << "NO" << endl;
                }
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
