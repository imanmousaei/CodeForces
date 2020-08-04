#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 1e5 + 7;

int n,m,k,dis[MAX];
bool vis[MAX];
vector<pii> adj[MAX];

void dijkstra(int v){
    priority_queue < pii , greater<int> > q;
    q.push(v);
    while(!q.empty()){
        auto v = q.top();
        q.pop();

        for(auto u:adj[v]){
            if(dis[v]+u.first<dis[u.second]){
                dis[u.second] = dis[v]+u.first
                q.push(pii(dis[u.second],u.second));
            }
        }

    }


}

int main(){
    fastIO;
    memset(dis,0x3f,sizeof(dis));
    cin >> n >> m >> k;
    for(int i=0;i<m;i++){
        int u,v,x;
        cin >> u >> v >> x;
        adj[u].push_back(pii(v,x));
        adj[v].push_back(pii(u,x));
    }
    for(int i=0;i<k;i++){
        int s,y;
        cin >> s >> y;
        dis[s] = y;
    }








    return 0;
}