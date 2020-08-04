#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

int q,k,n,mx,dp[MAX][3];
string s ;
string rgb="RGB";


int main(){
    int t;
    cin>>t;
    while (t--){
        cin>>n>>k>>s;
        fore(i,1,n){
            fore(j,0,2){
                dp[i][j] = dp[i-1][j] + (s[i-1] != rgb[(i + j)%3]);
                cerr<<i <<" "<<j<<dp[i][j]<<endl;
            }
        }
        int res = 1e9;
        fore(i,1,n - k + 1){
            fore(j,0,2){
                res = min(res , dp[i+k -1][j] - dp[i-1][j]);
            }
        }
        cout<<res<<endl;
    }
}