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
const ll maxn = 5e5 + 7;
const ll maxm = 2e5 + 7;

int n,m,c[maxn];
vi adj[maxn],topic[maxn],ans;

bool bfs(int v) {
    if(adj[v].size()<c[v]-1){
    	return 0;
    }

    int mx = 1;
    set<int> s;
    for (int u : adj[v]) {
        mx = max(c[u],mx);
        s.insert(c[u]);
        if(c[u]==c[v]){
        	return 0;
        }
    }

    int last = 0;
    for(auto a:s){
    	if(a-last>1 && last+1<c[v]){
    		// ERR(a,last);
    		return 0;
    	}
    	last = a;
    }

    if(mx<c[v]-1){
    	ERR(v,mx);
    	return 0;
    }

    return 1;
}

int main(){
    fastIO;
    cin >> n >> m;

    fore(i,1,m){
    	int u,v;
    	cin >> v >> u;
    	adj[v].pb(u);
    	adj[u].pb(v);
    }

    fore(i,1,n){
    	int t;
    	cin >> t;
    	topic[t].pb(i);
    	c[i] = t;
    }

    fore(i,1,n){
    	for(auto a:topic[i]){
    		ans.pb(a);
    	}
    }

    bool can = 1;
    fore(i,1,n){
    	if(!bfs(i)){
    		can = 0;
    		break;
    	}
    }

    if(can){
    	for(auto a:ans){
    		cout << a << " ";
    	}
    	cout << endl;
    }
    else{
    	cout << -1 << endl;
    }








    	

    




    return 0;
}