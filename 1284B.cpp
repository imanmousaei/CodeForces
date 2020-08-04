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

const ll INF = 1e7;
const ll MOD = 1e9 + 7;
const ll maxn = 1e6 + 7;
const ll maxm = 1e6;

ll cntselfs,n,cntMin[maxn],cntMax[maxn],sumMin[maxn],sumMax[maxn],MAX=-1;
ll ans;

int main(){
    fastIO;
    cin >> n;
    fore(i,1,n){
    	ll l,mx=-2,mn=INF;
    	bool self = 0;
    	cin >> l;
    	fore(j,1,l){
    		ll tmp;
    		cin >> tmp;
    		if(tmp>mn){
    			self = 1;
    		}
    		mx = max(mx,tmp);
    		mn = min(mn,tmp);
    		MAX = max(MAX,tmp);
    	}

    	if(self){
    		ans += 2*(n-cntselfs)-1;
    		cntselfs++;
    		// ER(i);
    	}
    	else{
			cntMax[mx]++;
			cntMin[mn]++;
		}
    }

    sumMax[0] = cntMax[0];
    sumMin[0] = cntMin[0];
    fore(i,1,MAX){
    	sumMin[i] = sumMin[i-1] + cntMin[i];
    	sumMax[i] = sumMax[i-1] + cntMax[i];
    }

 //    ER(ans);

	// ERR(MAX,sumMax[MAX]);

    fore(i,0,MAX-1){
    	ll tmp = cntMin[i] * ( sumMax[MAX] - sumMax[i] );
    	if(tmp>0){

	    	// ERR(i,tmp);
	    	// ERR(cntMin[i],sumMax[i]);

    		ans += tmp;
    	}

    }

    cout << ans << endl;





    return 0;
}