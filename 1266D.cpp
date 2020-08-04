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
const ll MAX = 3e5 + 7;

int n,m;
multiset<pii> in[MAX],out[MAX];

int main(){
    fastIO;
    cin >> n >> m;
    fore(i,1,m){
    	int v,u,w;
    	cin >> v >> u >> w;
    	out[v].push_back({u,w});
    	in[u].push_back({v,w});
    }

    fore(i,1,n){
    	if(in[i].size()>=1 && out[i].size()>=1){
    		auto itIn = in[i].begin();
    		auto itOut = in[i].end();
    		itOut--;

    		// TODO


    		in[i].erase(itIn);
    		out[i].erase(itOut);
    	}
    }





    return 0;
}