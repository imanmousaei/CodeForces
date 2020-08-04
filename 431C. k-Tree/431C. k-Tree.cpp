/**
Programmer : Iman Mousaei

QS : Tajzie n be jam vand haye <= k ba yeki>=d
dp[i][flag] : hamoon baraye n=i , flag = true iff yeki >= d

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
#define DPT for(int i=1;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 7e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 100 + 7;
const ll MOD = 1e9 + 7;

ll dp[MAX][2],n,k,d,ans;

int main()
{
    cin >> n >> k >> d ;

    dp[0][0] = 1;
    dp[0][1] = 0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k && i-j>=0;j++) // last num
        {
            if(j>=d)
            {
                dp[i][1] = (dp[i][1] + dp[i-j][0] + dp[i-j][1])%MOD;
            }
            else
            {
                dp[i][0] = (dp[i][0] + dp[i-j][0])%MOD;
                dp[i][1] = (dp[i][1] + dp[i-j][1])%MOD;
            }
        }

    }


    cout << dp[n][1];

    //DPT;

	return 0;
}
