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
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

int n,x,t;
vi adj[maxn];
bool removed[maxn] , vis[maxn];

bool isLeaf(int v){
	int deg = 0;
	for(int u:adj[v]){
		if(!removed[u]){
			deg++;
		}

		if(deg>=2){
			return false;
		}
	}
	return true;
}

int leaves(int v){
	vis[v] = 1;
	int cnt = 0;

	int deg = 0;
	for(int u:adj[v]){
		if(!removed[u]){
			deg++;
		}

		if(!vis[u] && !removed[u] ){
			cnt += leaves(u);
		}

		if(isLeaf(x)){
			return cnt;
		}

	}

	if(deg==1){
		removed[v] = 1;
		return 1;
	}

	return cnt;
}

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> n >> x;

    	fore(i,0,n){
    		removed[i] = 0;
    		vis[i] = 0;
    		adj[i].clear();
    	}

    	fore(i,2,n){
    		int u,v;
    		cin >> u >> v;
    		adj[u].pb(v);
    		adj[v].pb(u);
    	}

    	int cnt = 0;
    	while(!isLeaf(x)){
    		cnt += leaves(x);
    	}

    	// ER(cnt);

    	if(cnt%2==1){
    		cout << "Ashish" << endl;
    	}
    	else{
    		cout << "Ayush" << endl;
    	}



    }



    return 0;
}