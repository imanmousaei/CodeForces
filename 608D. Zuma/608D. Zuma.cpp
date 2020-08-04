/**
Programmer : Iman Mousaei

dp[i][j] : min from ball i to ball j : [i,j]
esteghra ro tool(d)

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

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 500 + 7;
const ll MOD = 1e9 + 7;

int n,c[MAX],dp[MAX][MAX];

int main()
{
    //memset(dp,INF,sizeof dp);

    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> c[i];
        dp[i][i] = 1;
    }

    for(int d=1;d<=n;d++) // range [l,r] which r-l = d
    {
        for(int l=1;l<=n && l+d<=n;l++)
        {
            int r = l+d;
            dp[l][r] = dp[l][r-1] + 1;
            for(int i=l;i<r;i++)
            {
                if(c[i]==c[r])
                {
                    if(r-i>1)
                    {
                        dp[i][r] = min(dp[i+1][r-1],dp[i][r]);
                    }
                    else if(r-i==1)
                    {
                        dp[i][r] = 1;
                    }

                    dp[l][r] = min(dp[l][r],dp[l][i-1]+dp[i][r]);
                }
            }

        }
    }


    //DPT2;


    cout << dp[1][n];

	return 0;
}
