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

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

ll n,cnt;

int mx(ll a)
{
    int m=0;
    while(a!=0)
    {
        int b = a%10;
        m = max(m,b);
        a/=10;
    }

    return m;
}


int main()
{
    cin >> n;

    while(n!=0)
    {
        n = n - mx(n);
        //cout << n << endl;
        cnt++;
    }

    cout << cnt;

	return 0;
}
