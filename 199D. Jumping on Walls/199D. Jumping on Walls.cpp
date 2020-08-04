/**
Programmer : Iman Mousaei

dp[x][y][w] : ninja is in wall x(0 or 1) (initially 0) and height y(initially 1) and the water is at height w(initially 0)

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

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e4 + 7;
const ll MOD = 1e9 + 7;

int dp[2][MAX][MAX],n,k;
bool safe[2][MAX];

bool DP(bool x,int y,int w,bool down=false)
{
    if(y>=n && w<n)
    {
        return dp[x][y][w] = true;
    }

    if(w>=y)
    {
        return dp[x][y][w] = false;
    }

    if(dp[x][y][w]!=-1)
    {
        return dp[x][y][w];
    }

    bool ret = 0;

    if(safe[!x][y+k] || y+k>=n)
    {
        ret |= DP(!x,y+k,w+1);
    }
    if(safe[x][y-1])
    {
        ret |= DP(x,y-1,w+1,1);
    }
    if((safe[x][y+1] || y+1>=n) && !down)
    {
        ret |= DP(x,y+1,w+1);
    }

    return dp[x][y][w]=ret;

}

int main()
{
    memset(dp,-1,sizeof dp);

    cin >> n >> k;
    for(int i=0;i<=1;i++)
    {
        for(int j=1;j<=n;j++)
        {
            char c;
            cin >> c;
            if(c=='-')
            {
                safe[i][j] = true;
            }
            else
            {
                safe[i][j] = false;
            }
        }
    }


    if(DP(0,1,0)==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


    /*
    cout << DP(0,5,4,1) << endl;

    for(int i=0;i<=1;i++)
    {
        for(int j=1;j<=n+k;j++)
        {
            for(int t=0;t<=n;t++)
            {
                if(dp[i][j][t]!=-1)
                    cout << "dp[" << i << "][" << j << "][" << t << "] = " << dp[i][j][t] << endl;
            }
        }
    }
    */


	return 0;
}
