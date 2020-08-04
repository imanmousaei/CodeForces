/**
Programmer : Iman Mousaei

partial sum 2D?
dp[x][y] : number of rectangles from (0,0) to (x,y)

Wrong/Time Limit/Bug/Incomplete

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

const ll MAX = 50 + 7;
const ll MOD = 1e9 + 7;

int n,m,q,dp[MAX][MAX],a[MAX][MAX];

int main()
{
    cin >> n >> m >> q;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin >> a[i][j]; // the coordinates of the cell's *right bottom point* is the cell's number's coordinates
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            dp[i][j] = dp[x][y-1] + dp[x-1][y] - dp[x-1][y-1];
            if(a[i][j]==0)
            {
                dp[i][j] += ///TODO : number of good rectangles containing a[i][j]
                /// should we calculate number of bad rectangles
            }
        }
    }


    for(int i=0;i<q;i++)
    {
        int x,y,x2,y2;
        cin >> x >> y >> x2 >> y2;
        cout << dp[x2][y2] - dp[x][y2] - dp[x2][y] + dp[x][y];
    }



	return 0;
}
