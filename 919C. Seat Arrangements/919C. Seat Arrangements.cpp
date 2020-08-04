/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define For(i,a,b) for (int i=a;i<b;i++)
#define Ford(i,a,b) for (int i=a;i>=b;i--)
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define VAL(x) #x << " = " << (x) << "   "
#define SQR(a) ((a) * (a))
#define SZ(x) ((int) (x).size())
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define FOREACH(i, x) for(__typeof((x).begin()) i = (x).begin(); i != (x).end(); i ++)
#define FOR(i, n) for (int i = 0; i < (n); i ++)
#define EPS (1e-8)
#define arrsize(a) sizeof(a)/sizeof(a[0])

#define DEBUG false
#if DEBUG
#define print(a) for(auto i:a) { cout << i << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#else
#define print(a)
#define printsz(a,sz)
#endif // DEBUG

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 2000 + 7;
const int MOD = 1e9 + 7;

ll cnt,dot;
int n,m,k;
char c[MAX][MAX];
int dp[MAX][MAX];

int main()
{
    cin >> n >> m >> k;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> c[i][j];
            if(c[i][j]=='.')
                dot++;
        }
    }

    if(n<k && m<k)
    {
        cout << 0;
        return EXIT_SUCCESS;
    }

    if(k==1)
    {
        cout << dot;
        return EXIT_SUCCESS;
    }


    // row
    for(int i=0;i<n;i++)
    {
        if(c[i][0]=='.')
            dp[i][0] = 1;
        else
            dp[i][0] = 0;

    }

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(c[i][j]=='*')
                dp[i][j] = 0;
            else
                dp[i][j] = dp[i][j-1] + 1;

            if(dp[i][j]>=k)
                cnt++;
        }
    }


    // col
    for(int j=0;j<m;j++)
    {
        if(c[0][j]=='.')
            dp[0][j] = 1;
        else
            dp[0][j] = 0;

    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(c[i][j]=='*')
                dp[i][j] = 0;
            else
                dp[i][j] = dp[i-1][j] + 1;

            if(dp[i][j]>=k)
                cnt++;
        }
    }


    cout << cnt;


	return EXIT_SUCCESS;
}
