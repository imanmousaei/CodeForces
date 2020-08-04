/**
Programmer : Iman Mousaei

dp[i] : h[i] + ... + h[i+k-1]

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
#define error(x) cerr << "# " << #x << " = " << (x) << endl
#define error(x,y) cerr << "# " << (x) << " " << (y) << endl

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 5e5 + 7;
const ll MOD = 1e9 + 7;

int n,k,h[MAX],dp[MAX],mn,idx;

int main()
{
    cin >> n >> k;

    for(int i=1;i<=n;i++)
    {
        cin >> h[i];
    }

    for(int i=1;i<=k;i++)
    {
        dp[1]+=h[i];
    }

    mn = dp[1];
    idx = 1;

    for(int i=2;i<=n && i+k-1<=n;i++)
    {
        dp[i] = dp[i-1] - h[i-1] + h[i+k-1];
        if(mn>dp[i])
        {
            mn = dp[i];
            idx = i;
        }
    }

    cout << idx;

	return 0;
}
