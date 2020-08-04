#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CP(s,x) cout<<s<<" "<<x<<endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

int q;
map<string,string> handle;
map<string,bool> vis;
vector<string> names;

string dfs(string v){
    vis[v] = 1;
    if(handle[v].empty()){
        return v;
    }
    string u = handle[v];
    return dfs(u);
}

int main(){
    fastIO;
    cin >> q;
    while(q--){
        string a,b;
        cin >> a >> b;
        handle[a] = b;
        names.push_back(a);
    }
    vector<string> ans;
    for(string name:names){
        if(!vis[name]){
            ans.push_back( name + " " + dfs(name) );
        }
    }
    cout << ans.size() << endl;
    for(string s:ans){
        cout << s << endl;
    }




    return 0;
}