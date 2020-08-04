/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout<<"CP"<<x<<endl;
#define S second
#define F first
#define VAL(x) #x << " = " << (x) << "   "
#define DPT for(int i=1;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 7e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 5e3 + 7;
const ll MOD = 1e9 + 7;

struct Node
{
    vi adj;
    bool reached;
    int reach;
};

Node node[MAX];
int n,m,s,cnt,cmp;
vi vstd;
bool vis[MAX];

void dfs(int v)
{
    if(node[v].reached)
    {
        return;
    }

    cmp++;
    node[v].reached = true;

    for(auto u:node[v].adj)
    {
        dfs(u);
    }

}

void dfs2(int v)
{
    if(vis[v])
    {
        return;
    }


    vis[v] = true;
    vstd.pb(v);

    /*
    if(node[v].adj.size()==0)
    {
        node[v].reach = 1;
        return;
    }
    */

    for(auto u:node[v].adj)
    {
        dfs2(u);
        //node[v].reach += node[u].reach;
    }

}

int main()
{
    cin >> n >> m >> s;
    for(int i=1;i<=m;i++)
    {
        int v,u;
        cin >> u >> v;
        node[u].adj.pb(v);
    }

    dfs(s);

    //cout << VAL(cmp) << endl;
    for(int i=1;i<=n;i++)
    {
        if(!node[i].reached)
        {
            dfs2(i);
            node[i].reach = vstd.size();
            vstd.clear();
            memset(vis,0,sizeof vis);
        }
    }


    while(cmp<n)
    {
        int mx = -1 , idx = -1;
        for(int i=1;i<=n;i++)
        {
            if(node[i].reach>mx && !node[i].reached)
            {
                mx = node[i].reach;
                idx = i;
            }
        }
        cnt++;
        dfs(idx);
        //cout << cmp << endl;
    }


    cout << cnt;


	return 0;
}
