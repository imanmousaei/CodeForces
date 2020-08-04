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
const ll maxn = 1e5 + 7;
const ll maxm = 2e5 + 7;

int t;
ll n,s,a[maxn],sum[maxn];

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	memset(a,0,sizeof(a));
    	memset(sum,0,sizeof(sum));

    	cin >> n >> s;

    	fore(i,1,n){
    		cin >> a[i];
    		sum[i] = a[i] + sum[i-1];
    	}

    	if(sum[n]<=s || n==1){
    		cout << 0 << endl;
    		continue;
    	}

    	ll mx = a[1] , mxidx = 1 , last = 1;
    	fore(i,2,n){
    		// ERR(i,mxidx);
	    	// ERRR(mx,last,sum[last]);

    		if(sum[i]-mx>s && sum[i]-a[i]>s){
    			last = i-1;
    			break;
    		}

    		if(a[i]>mx){
    			mx = a[i];
    			mxidx = i;
    		}

    		if(i==n){
    			last = n;
    		}
    	}

    	// while()

    	// ERRR(mx,last,sum[last]);
    	if(sum[last]<=s){
    		mxidx = 0;
    	}


    	cout << mxidx << endl;






    }



    return 0;
}