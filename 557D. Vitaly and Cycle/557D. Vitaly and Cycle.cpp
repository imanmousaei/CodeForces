/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define VAL(x) #x << " = " << (x) << "   "
#define SQR(a) ((a) * (a))
#define SZ(x) ((int) (x).size())
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define FOREACH(i, x) for(__typeof((x).begin()) i = (x).begin(); i != (x).end(); i ++)
#define FOR(i, n) for (int i = 0; i < (n); i ++)
#define EPS (1e-8)
#define arrsize(a) sizeof(a)/sizeof(a[0])

#define DEBUG false
#if DEBUG
#define print(a) for(auto i:a) { cout << i << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#else
#define print(a)
#define printsz(a,sz)
#endif // DEBUG

using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

struct Node
{
    vi adj;
    bool vis=false;
};

Node node[MAX];
char c[MAX];
int n,m;

void clean()
{
    for(int i=0;i<MAX;i++)
        node[i].vis = false;
}

void addEdge(int v, int u)
{
    node[v].adj.pb(u);
    node[u].adj.pb(v);
}

void DFS(int cur, int par=-1 , int dis=0)
{
	if (dis > maxdis)
    {
        pos = cur;
        maxdis = dis;
    }

	for(auto i:node[cur].adj)
	{
	    if (i != par && !node[i].vis)
        {
            DFS(i, cur, dis+1);
        }
	}
}

int maxlen(int start=0)
{
	maxdis = -1;
	DFS(start);
	start = pos;

	maxdis = -1;
	DFS(start);

	return maxdis;
}


int main()
{
    cin >> n >> m;

    for(int i=0;i<m;i++)
    {
        int v,u;
        cin >> v >> u;
        v--;u--;
        addEdge(v,u);
    }


    if(m==0)
    {
        cout << 3 << " " << n*(n-1)*(n-2)/6;
    }




	return EXIT_SUCCESS;
}
