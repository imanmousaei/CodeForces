#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll maxn = 2e5 + 7;

int n,f[maxn],in[maxn];
stack<int> alone;
bool isAlone[maxn], vis[maxn];

int dfs(int v){
	vis[v] = 1;
	if(f[v]==0 || vis[f[v]]){
		return v;
	}
	return dfs(f[v]);
}

int dfsIn(int v){
	vis[v] = 1;
	if(in[v]==0 || vis[in[v]]){
		return v;
	}
	return dfsIn(in[v]);
}



int main(){
    fastIO;
    cin >> n;

    fore(i,1,n){
    	isAlone[i] = 1;
    }

    fore(i,1,n){
    	cin >> f[i];
    	if(f[i]>0){
	    	isAlone[i] = 0;
	    	isAlone[f[i]] = 0;
	    }
	    in[f[i]] = i;
    }

    fore(i,1,n){
    	if(isAlone[i]){
    		// ER(i);
    		alone.push(i);
    	}
    }

    fore(i,1,n){
    	if(f[i]==0 || vis[i]){
    		continue;
    	}
    	// ERR(i,f[i]);
    	int startPoint = dfsIn(i) , endPoint = dfs(i) , lone = 0;
    	if(alone.size()>0 && alone.size()%2==1){
    		lone = alone.top();
    		alone.pop();
    		f[endPoint] = lone;
    		f[lone] = startPoint;
    	}
    	else{
    		f[endPoint] = startPoint;
    	}

		vis[lone] = 1;
		vis[startPoint] = 1;
		vis[endPoint] = 1;
    }

    // ER(alone.size());
	int v=0,u=0,startPoint=0;
	bool flg = 0 ;

    if(alone.size()>0){
		startPoint = alone.top();
		alone.pop();
		f[startPoint] = alone.top();


	    while(!alone.empty()){
	    	if(flg){
	    		f[u] = alone.top();
	    	}
			
	    	flg = 1;
	    	v = alone.top();
	    	alone.pop();
	    	if(alone.size()>0){
				u = alone.top();
		    	alone.pop();
		    	f[v] = u;
		    }
		    else{
		    	f[v] = startPoint;
		    	u = v;
		    }

	    }

	    f[u] = startPoint;

	}

    fore(i,1,n){
    	cout << f[i] << " ";
    }

    cout << endl;


    return 0;
}