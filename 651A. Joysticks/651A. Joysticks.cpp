/**
Programmer : Iman Mousaei

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

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 200 + 7;
const ll MOD = 1e9 + 7;

int dp[MAX][MAX];
bool vis[MAX][MAX];

int DP(int a,int b)
{
    int mn = min(a,b);
    if(mn<=0)
    {
        return 0;
    }
    else if(vis[a][b])
    {
        return dp[a][b];
    }
    vis[a][b] = true;
    dp[a][b] = max(DP(a+1,b-2),DP(a-2,b+1))+1;

    return dp[a][b];

}

int main()
{
    int a1,a2;
	cin >> a1 >> a2;
	int mn = min(a1,a2);

	if(a1<2 & a2<2)
    {
        cout << 0;
        return 0;
    }

    cout << DP(a1,a2);


	return 0;
}
