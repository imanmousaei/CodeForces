#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 3e5 + 7;
const ll maxm = 2e5 + 7;

ll n,m,ans;
ll fac[maxn];

ll fact(ll a){
	if(a<=1){
		return 1;
	}
	
	if(fac[a]!=0){
		return fac[a];
	}

	ll t = fact(a-1)%m;
	fac[a-1] = t;
	fac[a] = (t*a)%m;
	return fac[a];
}

int main(){
    fastIO;
    cin >> n >> m;

    // ER(fact(7));

    ans = (n*fact(n))%m;

    // ER(ans);

    fore(i,1,n){
    	ans += ((((n-i)%m) * ((n-i)%m)%m) * fact(i+1)%m * fact(n-i-1)%m ) % m;
    	ans%=m;
    }

    cout << ans%m << endl;



    return 0;
}