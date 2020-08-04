#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<<#x << " = "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CNTHT for(int i='a';i<='z';i++){cout << "cnth[" << char(i) << "] = " << cnth[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 200 + 7;

string p,h;
int n,t;
int cnth[MAX],cntp[MAX];

bool is_pass(){
	fore(i,'a','z'){
		if(cnth[i]!=cntp[i]){
			return 0;
		}
	}
	return 1;
}

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	memset(cnth,0,sizeof(cnth));
    	memset(cntp,0,sizeof(cntp));
    	cin >> p >> h;
    	n = p.size();
    	fore(i,0,n-1){
    		cntp[p[i]]++;
    	}

    	bool is = 0;
    	fore(i,0,h.size()-1){
    		cnth[h[i]]++;
    		if(i-n>=0){
    			cnth[h[i-n]]--;
    		}
    		if(is_pass()){
    			is = 1;
    			break;
    		}
    		// ER(i);
    		// CNTHT;
    	}

    	if(is){
    		cout << "YES" << endl;
    	}
    	else{
    		cout << "NO" << endl;
    	}


    }



    return 0;
}