/**
Programmer : Iman Mousaei

dp[n][m][b] : person 1 to n, m lines, b bugs

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout << "CP" << x << endl;
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 500 + 7;
const ll MOD = 1e9 + 7;

int dp[5][MAX][MAX],a[MAX],mod;

/*
int solve(int n,int m,int b)
{
    if(m==0)
    {
        return dp[n][m][b] = 1%mod;
    }

    if(b<a[n])
    {
        return dp[n][m][b] = solve(n-1,m,b)%mod;
    }

    cout << n << " " << m << " " << b << endl;
    return dp[n][m][b] = (solve(n,m-1,b-a[n])+solve(n-1,m,b))%mod;

}
*/

int main()
{
    int n,m,b;
    cin >> n >> m >> b >> mod;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    dp[0][0][0] = 1;

    for(int i=1;i<=n;i++)
    {
        int i2 = i%2;
        for(int j=0;j<=m;j++)
        {
            for(int k=0;k<=b;k++)
            {
                dp[i2][j][k] = dp[!(i2)][j][k];
                if(j>=1 && k>=a[i])
                {
                    dp[i2][j][k] += dp[i2][j-1][k-a[i]];
                }

                dp[i2][j][k] %= mod;
            }
        }
    }

    ll sum = 0;
    for(int k=0;k<=b;k++)
    {
        sum += dp[n%2][m][k];
        sum %= mod;
    }

    cout << sum;


	return 0;
}
