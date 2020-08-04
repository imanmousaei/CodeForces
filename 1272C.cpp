#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<<#x << " = "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CANT for(int i='a';i<='z';i++){cout << "can[" << i << "] = " << can[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

ll n,k,cnt,ans;
bool can[500];
string s;


int main(){
    fastIO;
    cin >> n >> k >> s;

    s+="?";
	char c;		
    fore(i,1,k){
    	cin >> c;
    	can[c] = 1;
    }

    fore(i,0,n){
    	// ER(cnt);
    	if(can[s[i]]){
    		cnt++;
    	}
    	else{
    		ll tmp = cnt*(cnt+1)/2;
    		ans += tmp;
    		cnt = 0;
    		// ER(ans);
    	}
    }

    // ER(cnt);
    // ans += C(cnt);

    cout << ans << endl;

    // CANT;



    return 0;
}