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
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;


ll factorize(ll m){
	for(int i = sqrt(m);i>=2;i--){
		if(m%i==0){
			ll d = m/i;
			if(d!=i){
				return d;
			}
		}
	}
	return 0;
}

int main(){
    fastIO;
	ll t,n;
    cin >> t;
    while(t--){
    	cin >> n;
    	bool can = 0;
    	fore(i,2,sqrt(n)){
	    	set<int> ans;
    		if(n%i==0){
    			ll d = n/i;
    			ll f1 = factorize(d);
    			ll f2 = factorize(i);
    			if(f1){
    				ans.insert(i);
    				ans.insert(f1);
    				ans.insert(d/f1);
    				// cout << "YES" << endl;
    				// cout << i << " " << f1 << " " << d/f1 << endl;
    				// can = 1;
    				// break;
    			}
    			else if(f2){
    				ans.insert(i);
    				ans.insert(f1);
    				ans.insert(d/f1);
    				// cout << "YES" << endl;
    				// cout << d << " " << f2 << " " << i/f1 << endl;
    				// can = 1;
    				// break;
    			}
    			if(ans.size()==3){
    				cout << "YES" << endl ;
    				for(auto a:ans){
    					cout << a << " ";
    				}
    				cout << endl;
    				can = 1;
    				break;
    			}

    		}
    	}
    	if(!can){
    		cout << "NO" << endl;
    	}
    }


    return 0;
}