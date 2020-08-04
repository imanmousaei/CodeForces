#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CP(s,x) cout<<s<<" "<<x<<endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 1e5 + 7;

int n,m,cnt,dp[MAX];
vi adj[MAX];
bool hasCat[MAX],vis[MAX];

void dfs(int v){
    vis[v] = 1;

    for(int u:adj[v]){
        if(!vis[u]){
            if(hasCat[u]){
                dp[u] = dp[v]+1;
            }
            if(dp[u]>m){
                continue;
            }
            if(adj[u].size()==1 && dp[u]<=m){
                cnt++;
                //CP("#",u);
            }            
            dfs(u);
        }

    }

}

int main(){
    fastIO;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        cin >> hasCat[i];
        dp[i] = hasCat[i];
    }

    for(int i=1;i<n;i++){
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    dfs(1);

    //DPT;

    cout << cnt << endl;


    return 0;
}