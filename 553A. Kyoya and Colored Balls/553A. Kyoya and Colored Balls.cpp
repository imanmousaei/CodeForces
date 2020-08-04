/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CP(x) cout << "CP " << x << endl;
#define CLR(x, a) memset(x, a, sizeof x)
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

const ll MAX = 1e3 + 7;
const ll MOD = 1e9 + 7;

ll c[MAX],s[MAX],dp[MAX];
ll C[MAX][MAX];

int main()
{
    for(int i=0 ; i<MAX ; i++)
    {
        C[i][0] = C[i][i] = 1;
    }

    for(int i=1 ; i<MAX ; i++)
    {
        for(int j=1 ; j<i ; j++)
        {
            C[i][j] = (C[i-1][j] + C[i-1][j-1]) % MOD;
        }
    }

    int n,k;
    cin >> k;
    for(int i=0;i<k;i++)
    {
        cin >> c[i];
    }

    s[0] = c[0];
    dp[0] = 1;

    for(int i=1;i<k;i++)
    {
        s[i] = s[i-1] + c[i];
        dp[i] = (dp[i-1] * 1LL * C[s[i]-1][c[i]-1]) % MOD;
        //cout << C(s[i]-1,c[i]-1) << " " << dp[i] << endl;
    }

    cout << dp[k-1];


	return 0;
}
