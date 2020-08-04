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
#define er(x) cerr << "# " << #x << " = " << (x) << endl
#define err(x,y) cerr << "# " << (x) << " " << (y) << endl

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e18 + 7;
const int INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e3 + 7;
const ll MOD = 1e7;

int cnt=0,n,dp[MAX];

int main()
{
    cin >> n;

    cnt = n/100;
    n%=100;

    for(int i=1;i<=n;i++)
    {
        dp[i] = INF;
    }

    dp[1] = 1;
    dp[5] = 1;
    dp[10] = 1;
    dp[20] = 1;
    dp[100] = 1;

    for(int i=1;i<=n;i++)
    {
        dp[i+1] = min(dp[i+1],dp[i]+1);
        dp[i+5] = min(dp[i+5],dp[i]+1);
        dp[i+10] = min(dp[i+10],dp[i]+1);
        dp[i+20] = min(dp[i+20],dp[i]+1);
        dp[i+100] = min(dp[i+100],dp[i]+1);
    }

    cout << dp[n] + cnt;


	return 0;
}
