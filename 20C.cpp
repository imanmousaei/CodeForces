#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define pb push_back
#define LOG(x) for(int i=0;i<=n;i++){cout << #x << "[" << i << "] = " << x[i] << endl;}
#define LOG2(x) for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << #x << "[" << i << "][" << j << "] = " << x[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)
#define forn(i,l,r) for(int i = l ; i >= r ; i--)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF32 = 1e9;
const ll INF64 = 1e18;
const ll MOD = 1e9 + 7;
const ll maxn = 1e5 + 7;
const ll maxm = 2e5 + 7;

vector <pll> adj[maxn] ;
ll dis[maxn] ;
int parent[maxn];
int n, m , k  ;

void dijkstra(int source) {
    priority_queue <pll, vector<pll>, greater<pll> > q ;
    dis[source] = 0 ;
    for (int j = 0; j <= n; ++j){
        if (dis[j] != INF64){
            q.push({dis[j] , j}) ;
        }
    }

    while (!q.empty()) {
        auto it = q.top();
        int v = it.second ;
        ll w = it.first;
        q.pop() ;
        if (dis[v] < w)
            continue;
        for (auto e : adj[v]) {
            ll u = e.second , w = e.first;
            if (dis[v] + w <= dis[u] ){
                if (dis[v] + w == dis[u]){
                    continue;
                }

                dis[u] = dis[v] + w ;
                parent[u] = v ;

                q.push({dis[u] , u}) ;
            }
        }
    }
}


int main () {
    fastIO;
    cin >> n >> m ;
    fore(i,1,m) {
        int v , u , e ;
        cin >> v >> u >> e ;
        adj[v].pb({e,u}) ;
        adj[u].pb({e,v}) ;
    }
    fore(i,1,n){
        dis[i] = INF64 ;
    }

    dijkstra(1) ;

    if(dis[n]==INF64){
        cout << -1 << endl;
        return 0;
    }

    stack<int> ans;
    int v = n;
    while(v!=1){
        ans.push(v);
        v = parent[v];
    }

    cout << 1 << " ";
    while(!ans.empty()){
        cout << ans.top() << " ";
        ans.pop();
    }



    // LOG(parent);

    return 0 ;
}