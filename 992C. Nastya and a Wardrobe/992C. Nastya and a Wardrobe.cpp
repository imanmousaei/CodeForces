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

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

ll pow2(ll n)
{
    if(n==0)
    {
        return 1;
    }

    ll t = pow2(n/2);

    t = (t*t)%MOD;

    if(n&1)
    {
        t = (t*2)%MOD;
    }

    return t%MOD;

}

int main()
{
    ll n,k;
    cin >> n >> k;

    if(n==0)
    {
        cout << 0;
        return 0;
    }

    n%=MOD;

    ll A = (n*pow2(k+1))%MOD;
    ll B = pow2(k) - 1;

    ll ans = (A - B + MOD)%MOD;

    cout << ans;

	return 0;
}
