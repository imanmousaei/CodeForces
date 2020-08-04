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
const ll maxn = 1e5 + 7;
const ll maxm = 2e5 + 7;

struct MaximumPair{
	int sum,idx2nd;
} mx[maxn];

int t,n,k,z,a[maxn],sum[maxn],ans;

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> n >> k >> z;
    	sum[0] = 0;
    	mx[1].sum = 0;
    	ans = 0;

    	fore(i,1,n){
    		cin >> a[i];
    		sum[i] = sum[i-1] + a[i];
    		if(i==1){
    			continue;
    		}

    		if(mx[i-1].sum<a[i]+a[i-1]){
    			mx[i].sum = a[i]+a[i-1];
    			mx[i].idx2nd = i;
    		}
    		else{
    			mx[i].sum = mx[i-1].sum;
    			mx[i].idx2nd = mx[i-1].idx2nd;
    		}


    	}
    	sum[n+1] = sum[n];

    	fore(l,0,z){
    		if(l>k/2){
    			break;
    		}
    		
    		int maxLen = k-2*l+1;
    		ans = max(ans, sum[maxLen] + l*mx[maxLen].sum );
    		if(l>0 && (k-mx[maxLen+1].idx2nd-1) % 2 == 1){
	    		ans = max(ans, sum[maxLen+1] + (l-1)*mx[maxLen+1].sum + a[mx[maxLen+1].idx2nd-1] );
    		}

    		// ERR(l,ans);
    	}

    	cout << ans << endl;
    	
    }



    return 0;
}