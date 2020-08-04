#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<<#x << " = "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e10;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

ll q,a,b,c,ans=INF,dis;

int main(){
    fastIO;
    cin >> q;
    while(q--){
    	cin >> a >> b >> c;
    	ans = INF;
    	fore(i,a-1,a+1){
    		fore(j,b-1,b+1){
    			fore(k,c-1,c+1){
    				dis = abs(i-j) + abs(i-k) + abs(j-k);
    				ans = min(dis,ans);
    			}
    		}
    	}

    	cout << ans << endl;



    }



    return 0;
}