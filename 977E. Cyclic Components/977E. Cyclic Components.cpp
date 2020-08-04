/**
ProGrammer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

struct Node
{
    bool vis = false;
    int d;
    list<int> adj;
};

Node node[MAX];
bool flag = true;

void dfs(int v)
{
    node[v].vis = true;

    if(node[v].d!=2)
    {
        flag = false;
        //cout << "cuz " << v << endl;
    }

    for(auto k:node[v].adj)
    {
        if(!node[k].vis)
        {
            dfs(k);
        }
    }

}

int n,m,cnt;

int main()
{
    cin >> n >> m;

    for(int i=0;i<m;i++)
    {
        int u,v;
        cin >> u >> v;
        u--;
        v--;
        node[u].adj.pb(v);
        node[v].adj.pb(u);
        node[u].d = node[u].adj.size();
        node[v].d = node[v].adj.size();
    }

    for(int i=0;i<n;i++)
    {
        if(!node[i].vis)
        {
            flag = true;
            dfs(i);
            cnt += flag;
        }
    }

    cout << cnt;

    return EXIT_SUCCESS;
}
