#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CP(s,x) cout<<s<<" "<<x<<endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 1e3 + 7;

int n,p[MAX];
bool vis[MAX];

int dfs(int v){
    vis[v] = 1;
    int u = p[v];
    if(!vis[u]){
        return dfs(u);
    }
    else{
        return u;
    }

    return -1;

}

int main(){
    fastIO;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> p[i];
    }
    for(int i=1;i<=n;i++){
        memset(vis,0,sizeof(vis));
        cout << dfs(i) << " ";

    }



    return 0;
}