/**
Programmer : Iman Mousaei

dp[i][j][k] : v1=i , v2=j , t=k

Wrong/Time Limit/Bug/Incomplete

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

int v1,v2,d,t,dp[MAX][MAX];

int main()
{
    cin >> v1 >> v2 >> t >> d;

    dp[v1][v1][1] = v1;
    dp[v2][v2][1] = v2;

    for(int i=v1;i<=v2;i++)
    {
        for(int j=i+1;j<=v2;j++)
        {
            for(int k=2;k<=t;k++)
            {

            }
        }
    }



	return 0;
}
