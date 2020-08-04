#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define pb push_back
#define LOG(x) for(int i=0;i<=n;i++){cout << #x << "[" << i << "] = " << x[i].F << endl;}
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
const ll INF64 = 1e16;
const ll MOD = 1e9 + 7;
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

struct Node{
	int v,deg,dis;
};

bool cmp(Node a,Node b){
	if(a.dis == b.dis){
		return a.deg < b.deg;
	}
	return a.dis > b.dis;
}

int n,k,dis[maxn];
bool vis[maxn];
bool industry[maxn];
pii cnt[maxn];
vi adj[maxn];
vector<pii> vec;

int dfs(int v){
	vis[v] = 1;
	int cunt = 0;
	if(adj[v].size()==1){
		cnt[v].S = v;
		cnt[v].F = 0;
		vec.pb(cnt[v]);
		return 1;
	}
	for (int u : adj[v]) {
	    if(!vis[u]){
    		cunt += dfs(u);
	    }
	}
	cnt[v].S = v;
	cnt[v].F = cunt;
	vec.pb(cnt[v]);

	return cunt;
}

void bfs(int v) {
    queue<int> q;
    q.push(v);
    vis[v] = 1;
    dis[v] = 0;

    while (!q.empty()) {
        int v = q.front();
        q.pop();
        for (int u : adj[v]) {
            if(!vis[u]){
                q.push(u);
                vis[u] = true;
                dis[u] = dis[v] + 1;
            }
        }
    }
}

int main(){
    fastIO;
    cin >> n >> k;
    fore(i,2,n){
    	int u,v;
    	cin >> u >> v;
    	adj[u].pb(v);
    	adj[v].pb(u);
    }

    dfs(1);
    fill(vis,vis+n+1,0);
    bfs(1);

    ll sum = 0 , menha = 0;
    sort(vec.begin(),vec.end());

    // LOG(cnt);

    for(auto p:vec){
    	sum += dis[p.S] - p.F;
    	// ERR(sum,p.S);
    	k--;
    	if(k<=0){
    		break;
    	}
    }


    cout << sum << endl;



    return 0;
}