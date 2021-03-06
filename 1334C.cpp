#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define pb push_back
#define LOG(x) for(int i=0;i<=n;i++){cout << #x << "[" << i << "] = " << x[i] << endl;}
#define LOG2(x) for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << #x << "[" << i << "][" << j << "] = " << x[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)
#define forn(i,l,r) for(int i = l ; i >= r ; i--)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF32 = 1e9;
const ll INF64 = 1e16;
const ll MOD = 1e9 + 7;
const ll maxn = 3e5 + 7;
const ll maxm = 2e5 + 7;

ll dp[maxn],a[maxn],b[maxn],t,n;
// dp[i] = age az 1 shoroo konim ta j bokoshim min chan bullet mikhaim

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> n ;
    	dp[0] = 0;

    	fore(i,1,n){
    		cin >> a[i] >> b[i];
    		dp[i] = dp[i-1] + max(a[i]-b[i-1],0LL);
    	}

    	// LOG(dp);

    	ll ans = dp[n];
    	fore(i,2,n){
    		ans = min(ans, dp[n] - min(b[n],a[1]) + min(b[i-1],a[i]) );
    		// ERR(i,ans);
    	}

    	cout << ans << endl;

    }




    return 0;
}