/**
Programmer : Iman Mousaei

dp[x][y] : ninja is in wall x(0 or 1) (initially 0) and height y(initially 1)

Accepted FINALLY
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

const ll MAX = 3e5 + 7;
const ll MOD = 1e9 + 7;

int dp[2][MAX],n,k,cnt,b=INF;
bool dang[2][MAX];

bool DP(bool x,int y,int w,bool down=false)
{
    if(w>=y)
    {
        return dp[x][y] = false;
    }

    if( y>n || (y==n && !dang[x][y]) )
    {
        return dp[x][y] = true;
    }


    if(dp[x][y]!=-1)
    {
        return dp[x][y];
    }

    bool ret = 0;

    if(!dang[!x][y+k])
    {
        ret |= DP(!x,y+k,w+1);
    }
    if(!dang[x][y-1])
    {
        ret |= DP(x,y-1,w+1,1);
    }
    if(!dang[x][y+1] && !down)
    {
        ret |= DP(x,y+1,w+1);
    }

    return dp[x][y]=ret;

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
            if(c=='X')
            {
                b = min(b,j);
                cnt++;
                dang[i][j] = true;
            }
            else
            {
                dang[i][j] = false;
            }
        }
    }

    if(cnt==0)
    {
        cout << "YES" << endl;
        return 0;
    }

    if(b>k)
    {
        b-=k;
    }
    else
    {
        b=1;
    }

    //cout << b << endl;

    if(DP(0,b,0)==1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }



    /*
    //cout << DP(0,5,4,1) << endl;

    for(int i=0;i<=1;i++)
    {
        for(int j=1;j<=n+k;j++)
        {
            if(dp[i][j]!=-1)
                cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;
        }
    }
    */


	return 0;
}
