#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<<"# "<<x<<endl;
#define ERR(x) cerr<<"@ "<<x<<endl;
#define ER2(s,x) cerr<<s<<" "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

ll t,n;

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> n;

    	if(n<15){
    		cout << "NO" << endl;
    		continue;
    	}


    	bool f = 1;
    	fore(i,15,20){
    		if( (n-i)%14 == 0 ){
    			cout << "YES" << endl;
    			f = 0;
    			break;
    		}
    	}

    	if(f){
    		cout << "NO" << endl;
    	}




    }


    return 0;
}