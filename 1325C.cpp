#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define pb push_back
#define LOG(x) for(int i=0;i<x.size();i++){cout << #x << "[" << i << "] = " << x[i].idx << endl;}
#define LOG2(x) for(int i=0;i<=n;i++){for(int j=0;j<x[i].size();j++){cout << #x << "[" << i << "][" << j << "] = " << x[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 1e5 + 7;
const ll maxm = 2e5 + 7;

struct Edge{
	int end,idx,label,vis;
};

vector<Edge> adj[maxn];
vi deg[maxn];
int n,ans[maxn],vis[maxn];

int main(){
    fastIO;
    cin >> n;
    fore(i,0,n-2){
    	int u,v;
    	cin >> u >> v;
    	Edge e;
    	e.idx = i;
    	e.end = u;
    	adj[v].pb(e);
    	e.end = v;
    	adj[u].pb(e);
    }

    // LOG(adj[6]);

    fore(i,1,n){
    	deg[ adj[i].size() ].pb(i);
    }

    // LOG2(deg);

    int maxUsed = 0;
    fore(d,1,n-1){
    	for(int u:deg[d]){
    		for(Edge e:adj[u]){
				if(!vis[e.end]){
		    		ans[e.idx] = maxUsed;
		    		// ERR(e.idx,minUsed);
		    		maxUsed++;
		    	}
	    	}
    		vis[u] = true;
    	}
    }

    fore(i,0,n-2){
    	cout << ans[i] << endl;
    }



    return 0;
}