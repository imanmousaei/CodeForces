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
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e2 + 7;
const ll MOD = 1e9 + 7;

int n,dp[MAX];

int main()
{
    cin >> n;

    dp[2] = 2;

    if(n%2)
    {
        cout << 0;
        return 0;
    }
    n/=2;
/*
    for(int i=4;i<=n;i+=2)
    {
        dp[i] = dp[i/2]*dp[i/2];
    }
*/
    ll ans = pow(2,n);
    cout << ans;


	return 0;
}
