#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CP(s,x) cout<<s<<" "<<x<<endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 1e9 + 7;

//bool vis[MAX];
ll a,b;
//map<int,int> par;

bool dfs(ll v){
    if(v==b){
        return 1;
    }
    else if(v>b){
        return 0;
    }

    // par[2*v] = v;
    // par[10*v+1] = v;

    //vis[v] = true;
    bool ans = 0;
    // ans |= dfs(2*v);
    // ans |= dfs(10*v+1);
    return (dfs(2*v)||dfs(10*v+1));
}

int main(){
    fastIO;
    cin >> a >> b;

    if(dfs(a)){
        cout << "YES" << endl;
        stack<ll> s;
        ll v = b;
        while(v!=a){
            s.push(v);
            if(v%2==0){
                v/=2;
            }
            else{
                v/=10;
            }
        }
        s.push(a);
        cout << s.size() << endl;

        while(!s.empty()){
            cout << s.top() << " ";
            s.pop();
        }
    }
    else{
        cout << "NO" << endl;
    }



    return 0;
}