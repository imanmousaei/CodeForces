/**
Programmer : Iman Mousaei

dp[i][mask] : i = mask%m , mask = shows which digit of the given number is selected

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define VAL(x) #x << " = " << (x) << "   "
#define pow2(a) ((a) * (a))
#define SZ(x) ((int) (x).size())
#define ALL(x) (x).begin(), (x).end()
#define FILL(x, a) memset(x, a, sizeof x)
#define FOREACH(i, x) for(__typeof((x).begin()) i = (x).begin(); i != (x).end(); i ++)
#define FOR(i, n) for (int i = 0; i < (n); i ++)
#define EPS (1e-8)

using namespace std;

typedef long long ll;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int maxbit = 19;
const int maxm = 100 + 7;
const ll maxmask = (1<<19) + 7;

ll n,m,sz,fullmask;
int dp[maxm][maxmask],a[maxbit];

string int_to_string(ll a)
{
    stringstream ss;
    ss << a;
    string str = ss.str();
    return str;
}

int main()
{
    cin >> n >> m;

    for(int i=0;i<m;i++)
    {
        dp[i][0] = 1;
    }

    string s = int_to_string(n);

    int sz = s.size();
    fullmask = (1<<sz)-1;

    for(int i=0;i<sz;i++)
    {
        a[i] = s[i] - '0';
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            dp[*10+a[j]][i|(1<<(j-1))] +=
        }
    }


	return EXIT_SUCCESS;
}
