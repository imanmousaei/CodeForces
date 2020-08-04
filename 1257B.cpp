#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 3e9 + 7;

//bool vis[MAX];
ll t,x,y;

/*
bool dfs(ll s,ll f){
    if(s>=f){
        return 1;
    }
    if(s==1){      
        return 0;
    }

    vis[s] = 1;
    
    if( (s%2==0 && vis[3*s/2] && vis[s-1])  || (s%2==1 && vis[s-1]) ){
        return 0;
    }

    bool fl = 0;
    if(!vis[3*s/2]){
        fl |= dfs(3*s/2,f);
    }
    if(!vis[s-1]){
        fl |= dfs(s-1,f);
    }

    return fl;

}
*/


int main(){
    fastIO;
    cin >> t;
    while(t--){
        cin >> x >> y;

        // memset(vis,0,sizeof(vis));
        // if(dfs(x,y)){
        //     cout << "YES" << endl;
        // }
        // else{
        //     cout << "NO" << endl;
        // }

        if(x==1){
            if(y==1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else if (x == 2){
            if(y==3 || y==2 || y==1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else if(x==3){
            if(y==3 || y==2 || y==1){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "YES" << endl;
        }
    
    
    }



    return 0;
}