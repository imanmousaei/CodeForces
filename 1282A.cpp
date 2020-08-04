#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
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

int a,b,c,r,t,d,mn,mx;

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> a >> b >> c >> r;
    	if(a>b){
    		swap(a,b);
    	}
    	d = b-a;
    	mn = c-r;
    	mx = c+r;
    	if(r==0){
    		cout << d << endl;
    	}
    	else if(mn>b || mx<a){
    		cout << d << endl;
    	}
    	else if(mx>=b && mn<=a){
    		cout << 0 << endl;
    	}
    	else if(mn>=a && mx<=b){
    		cout << d - 2*r << endl;
    	}
    	else if(mx>=b && mn<=b){
    		cout << d-(b-mn) << endl;
    	}
    	else if(mx>=a && mn<=a){
    		cout << d-(mx-a) << endl;
    	}

    	



    	// else if(c>=b){
    	// 	if(c-r>b){
    	// 		cout << d << endl;
    	// 	}
    	// 	else{
    	// 		cout << max(0,d-(b-(c-r))) << endl;
    	// 	}
    	// }
    	// else if(c>=a){
    	// 	if(c-r>=a){
	    // 		cout << max(0,d-(2*r)) << endl;
    	// 	}
    	// 	else{
    	// 		cout << max(0,d-(c-a+r)) << endl;
    	// 	}
    	// }
    	// else if(c+r>=a){
    	// 	cout << max(0,d-(c+r-a)) << endl;
    	// }
    	// else{
    	// 	cout << d << endl;
    	// }


	}


    return 0;
}