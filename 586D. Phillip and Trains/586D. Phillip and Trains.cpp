/**
Programmer : Iman Mousaei

Jadval 3*n : initially leftmost column , trains : 2cps , hero : 1cps , move : right - up/down
dp[i][j] : can he go when he's in position (i,j)

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
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

const ll MAX = 100 + 7;
const ll MOD = 1e9 + 7;

int dp[7][MAX];
char c[7][MAX];
int t,n,k,sx,sy;

bool valid(int x,int y)
{
    if(c[x][y+1]=='T' || c[x][y+2]=='T' || c[x][y+3]=='T' || x<1 || x>3)
    {
        return false;
    }

    return true;
}



int DP(int x,int y)
{
    if(y>n)
    {
        return dp[x][y] = true;
    }

    if(dp[x][y]!=-1)
    {
        return dp[x][y];
    }


    /// iff his right is a train -> false
    if(c[x][y+1]=='T')
    {
        return dp[x][y] = false;
    }


    if(valid(x,y) && DP(x,y+3))
    {
        return dp[x][y] = true;
    }
    if(valid(x+1,y) && DP(x+1,y+3))
    {
        return dp[x][y] = true;
    }
    if(valid(x-1,y) && DP(x-1,y+3))
    {
        return dp[x][y] = true;
    }

    return dp[x][y] = false;
}


int main()
{
    cin >> t;
    while(t--)
    {
        memset(dp,-1,sizeof dp);
        memset(c,'.',sizeof c);
        cin >> n >> k;
        for(int i=1;i<=3;i++)
        {
            for(int j=1;j<=n;j++)
            {
                cin >> c[i][j];
                if(c[i][j]=='s')
                {
                    sx = i;
                    sy = j;
                    //cout << sx << " " << sy << endl;
                }
                else if(c[i][j]!='.')
                {
                    c[i][j]='T';
                }
            }
        }

        if(DP(sx,sy))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }



    }

	return 0;
}
