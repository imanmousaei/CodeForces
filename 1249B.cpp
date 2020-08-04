/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

// g++ -g -O2 -std=gnu++17 -static $file

#include <bits/stdc++.h>

#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first
// memset (arr,0,sizeof(num));

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector< vector<int> > vvi;
typedef vector< pii > vpii;
typedef vector<ll> vll;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

bool visited[MAX];
int dp[MAX];
vi adj[MAX],cmp;
int q,n;

int dfs(int v,int cnt=1){

    if(visited[v]==0){
        cmp.pb(v);
        visited[v] = 1;
        for(int u:adj[v]){

            if(visited[u]){
                return cnt;
            }

            return dfs(u,cnt+1);
        }
    }
    

}


int main()
{
    cin >> q;

    while(q--){

        for(int i=1;i<=n;i++){
            visited[i] = 0;
            adj[i].clear();
            dp[i] = 0;
        }

        cin >> n;
        for(int i=1;i<=n;i++){
            int p;
            cin >> p;
            if(p==i){
                dp[i] = 1;
            }
            
            adj[i].push_back(p);

        }

        for(int i=1;i<=n;i++){
            if(dp[i]!=0){
                cout << dp[i] << " ";
            }
            else if(visited[i]==false){
                int d = dfs(i);

                dp[i] = d;
                cout << d << " ";

                //printf("&dp[%d] = %d , d = %d \n",i,dp[i],d);
                
                for(int vc:cmp){
                    //cout << "@ " << vc << " !" << d  << " " ;
                    dp[vc] = d;
                    
                }
                //cout << endl;
                memset (visited,0,sizeof(visited));
                cmp.clear();
            }
        }

        cout << endl;

    }
	




	return 0;
}