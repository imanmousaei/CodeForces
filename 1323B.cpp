#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define LeftT for(int i=1;i<=mx;i++){cout << "cntleft[" << i << "] = " << cntleft[i] << endl;}
#define UpT for(int i=1;i<=mx;i++){cout << "cntup[" << i << "] = " << cntup[i] << endl;}
#define AzLeftT for(int i=1;i<=n;i++){cout << "azleft[" << i << "] = " << azleft[i] << endl;}
#define AzUpT for(int i=1;i<=m;i++){cout << "azup[" << i << "] = " << azup[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 1e7 + 7;
const ll maxm = 2e5 + 7;

ll azleft[maxn] , azup[maxn];
ll n,m,k;
ll mxU,mxL,ans;
bool a,b;

ll countBySize(int r,int c){
	ll cntup = 0 , cntleft = 0;

	for(int i=m;i>=1;i--){
    	cntup += (azup[i]>=r);
    }

    for(int i=n;i>=1;i--){
    	cntleft += (azleft[i]>=c);
    }

    return 1LL*cntup*cntleft;
}


int main(){
    fastIO;
    cin >> n >> m >> k;

    fore(i,1,n){
    	cin >> a;
    	if(a){
	    	azleft[i] = azleft[i-1] + 1;
	    	// cntleft[azleft[i]]++;
	    	mxL = max(mxL,azleft[i]);
	    }
    }

    fore(i,1,m){
    	cin >> b;
    	if(b){
	    	azup[i] = azup[i-1] + 1;
	    	// cntup[azup[i]]++;
	    	mxU = max(mxU,azup[i]);
	    }
    }

    // for(int i=mx;i>=1;i--){
    // 	cntup[i] += cntup[i+1];
    // 	cntleft[i] += cntleft[i+1];
    // }

    // AzLeftT;
    // AzUpT;
    // LeftT;
    // UpT;


    fore(i,1,sqrt(k)){
    	if(k%i==0){
    		int r = k/i;
    		ans += countBySize(r,i);
    		if(r!=i){
	    		ans += countBySize(i,r);
	    	}
    	}
    }

    cout << ans << endl;


    return 0;
}