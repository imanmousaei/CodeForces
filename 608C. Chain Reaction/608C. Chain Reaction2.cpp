/**
Programmer : Iman Mousaei

dp[i] : max not destroyed in range [0,i]

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

const ll MAX = 1e6 + 7;
const ll MOD = 1e9 + 7;

int dp[MAX],n,mx,mxxx,b[MAX];

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x ;
        cin >> b[x];
        if(mxxx<x)
        {
            mxxx = x;
        }
    }

    dp[0] = (b[0]!=0);

    mx = dp[0];

    for(int i=1;i<=mxxx;i++)
    {
        if(b[i]==0)
        {
            dp[i] = dp[i-1];
        }
        else if(i-(b[i]+1)<0)
        {
            dp[i] = 1;
        }
        else
        {
            dp[i] = dp[i-(b[i]+1)] + 1;
        }

        if(mx<dp[i])
        {
            mx = dp[i];
        }
    }

    cout << n-mx;


	return 0;
}
