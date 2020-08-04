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
const ll INF64 = 1e16;
const ll MOD = 1e9 + 7;
const ll maxn = 1e5 + 7;
const ll maxm = 2e5 + 7;

int n,dis[maxn];
vi adj[maxn];
bool vis[maxn];
set<int> disMod2;
set<int> parents;
int tekrari = 0;



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

				if(adj[u].size()==1){ // barg bood
					// ERR(u,dis[u]);
					disMod2.insert(dis[u]%2);
					if(parents.find(v) != parents.end()){ // exists
						tekrari++;
						// ERR(u,v);
					}
					else{
						parents.insert(v);
						// ERR(v,u);
					}
				}
			}
		}
	}
}

int main(){
    fastIO;
    cin >> n;
    fore(i,2,n){
    	int u,v;
    	cin >> u >> v;
    	adj[u].pb(v);
    	adj[v].pb(u);
    }

    fore(i,1,n){
    	if(adj[i].size()>1){
		    // ER(i);
		    bfs(i);
		    break;
    	}
    }

    if(disMod2.size()==1){ // hame zoj
    	cout << 1 << " ";
    }
    else{
    	cout << 3 << " ";
    }

    cout << n - 1 - tekrari << endl;



    return 0;
}