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
const ll maxn = 200 + 7;
const ll maxm = 2e5 + 7;

int t,n,k1,k2,a,max1,max2;

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> n >> k1 >> k2;
    	max1 = 0;
    	max2 = 0;

    	fore(i,1,k1){
    		cin >> a;
    		max1 = max(max1,a);
    	}
    	fore(i,1,k2){
    		cin >> a;
    		max2 = max(max2,a);
    	}

    	if(max1>max2){
    		cout << "YES" << endl;
    	}
    	else{
    		cout << "NO" << endl;
    	}
    
    }



    return 0;
}