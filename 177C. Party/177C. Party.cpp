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

const int MAX = 2000 + 7;
const int MOD = 1e9 + 7;

struct Node
{
    vi adj;
    bool vis=false;
};

Node node[MAX];
bool enemy[MAX][MAX];
vi path;
int mx = 0;

void clean()
{
    for(int i=0;i<MAX;i++)
    {
        node[i].vis = false;
    }
}

void addFriend(int v, int u)
{
    node[v].adj.pb(u);
    node[u].adj.pb(v);
}

void addEnemy(int v, int u)
{
    enemy[v][u] = true;
    enemy[u][v] = true;
}

void DFS(int v)
{
	node[v].vis = true;
	path.pb(v);
	for (auto i:node[v].adj)
    {
		if(!node[i].vis)
			DFS(i);
	}
}

bool hasEnemy()
{
    for(auto i:path)
    {
        for(auto j:path)
        {
            if(enemy[i][j])
                return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
	int f;
	cin >> f;

	while(f--)
    {
		int v, u;
		cin >> v >> u;
		v--, u--;
		addFriend(u,v);
	}

	int e;
	cin >> e;

	while(e--)
    {
		int v, u;
		cin >> v >> u;
		v--, u--;
		addEnemy(v,u);
	}

	for(int i=0;i<n;i++)
    {
        if(node[i].vis)
            continue;

        path.clear();
        DFS(i);

        if(hasEnemy())
            continue;

        int sz = path.size();
        mx = max(mx,sz);

    }

    cout << mx;

	return EXIT_SUCCESS;
}
