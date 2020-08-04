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

const int MAX = 2000 + 7;

struct Node
{
    vi adj;
    bool vis=false;
};

Node node[MAX];
int n,maxdis;
vi roots;

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

void DFS(int cur , int dis=0)
{
    node[cur].vis = true;

    maxdis = max(maxdis,dis);

	for(auto i:node[cur].adj)
	{
	    if (!node[i].vis)
        {
            DFS(i,dis+1);
        }
	}
}

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int v;
		cin >> v;
		if(v==-1)
            roots.pb(i);
		else
		{
		    v--;
            addEdge(v,i);
		}
	}

	for(auto i:roots)
    {
        clean();
        DFS(i);
    }

    cout << maxdis+1;


	return EXIT_SUCCESS;
}

