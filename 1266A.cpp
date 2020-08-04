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

int even,sum,cnt0,n;
string s;

int main(){
    fastIO;
    cin >> n;
    while(n--){
    	cin >> s;
    	even = 0;
    	sum = 0;
    	cnt0 = 0;

    	for(char c:s){
    		c-='0';
    		sum += c;
    		if(c==0){
    			cnt0++;
    		}
    		if(c%2==0){
    			even++;
    		}
    	}

    	// ER(cnt0);
    	// ER(even);
    	// ER(sum);

    	if(cnt0>=1 && even>=2 && sum%3==0) {
    		cout << "red" << endl;
    	}
    	else{
    		cout << "cyan" << endl;
    	}


    }



    return 0;
}