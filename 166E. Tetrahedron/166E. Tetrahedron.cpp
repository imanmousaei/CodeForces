/**
Programmer : Iman Mousaei

dp[i][j] : number of ways we can get to D with i moves from j ; j = {0,1} = {{A,B,C},D}    % MOD
0 = A,B,C
1 = D

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout<<"CP"<<x<<endl;
#define S second
#define F first
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e7 + 7;
const ll MOD = 1e9 + 7;

ll dp[MAX][2],n;

int main()
{

    cin >> n;

    dp[2][1] = 3; // D
    dp[2][0] = 2; // A,B,C
    for(int i=3;i<=n;i++)
    {
        dp[i][0] = ((2*(dp[i-1][0])%MOD)%MOD + (dp[i-1][1]%MOD)) % MOD;
        dp[i][1] = (3*(dp[i-1][0])%MOD) % MOD;
    }

    cout << dp[n][1];

	return 0;
}
