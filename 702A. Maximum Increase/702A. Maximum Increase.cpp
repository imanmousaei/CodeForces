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

const ll MAX = 1e5 + 7;
const ll MOD = 1e9 + 7;

int n,a[MAX],dp[MAX],mx;

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    dp[1] = 1;
    mx = 1;

    for(int i=2;i<=n;i++)
    {
        dp[i] = 1;
        if(a[i]>a[i-1])
        {
            dp[i] = dp[i-1] + 1;
        }
        mx = max(dp[i],mx);
    }

    cout << mx;


	return 0;
}
