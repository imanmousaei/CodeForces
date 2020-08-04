/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define VAL(x) #x << " = " << (x) << "   "
#define SQR(a) ((a) * (a))
#define SZ(x) ((int) (x).size())
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first

using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

struct Node
{
    vector< pair<int,int> > adj;
    bool vis=false;
};

Node node[MAX];
ll n,dis,maxdis,sumw;

void dfs(int v)
{
    //cout << "#" << v << " " << dis << endl;

    node[v].vis = true;

    for(int i=0;i<node[v].adj.size();i++)
    {
        int u = node[v].adj[i].F;
        if(!node[u].vis)
        {
            dis += node[v].adj[i].S;
            maxdis = max(dis,maxdis);
            dfs(u);
            dis -= node[v].adj[i].S;
        }
    }
}

int main()
{
    cin >> n;
    for(int i=0;i<n-1;i++)
    {
        int a,b,w;
        cin >> a >> b >> w;
        a--;
        b--;
        node[a].adj.pb(make_pair(b,w));
        node[b].adj.pb(make_pair(a,w));
        sumw += w;
        //cout << "@" << node[a].adj[i].F << " " << node[a].adj[i].S << '\t' << node[b].adj[i].F << " " << node[b].adj[i].S << endl;
    }

    dfs(0);

    //cout << sumw << " " << maxdis << endl;
    cout << 2LL * sumw - maxdis;

	return EXIT_SUCCESS;
}
