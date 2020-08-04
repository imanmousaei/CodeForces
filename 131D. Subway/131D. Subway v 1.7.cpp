/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define For(i,a,b) for (int i=a;i<b;i++)
#define Ford(i,a,b) for (int i=a;i>=b;i--)
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

#define DEBUG true
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

const int MAX = 3e3 + 7;
const int MOD = 1e9 + 7;

struct Node
{
    vi adj;
    bool vis=false,ringroad=false;
    int par=-1,dis=INF;
};

Node node[MAX];
int n;

void clean()
{
    for(int i=0;i<MAX;i++)
        node[i].vis = false;
}

void DFS2(int v,int h)
{
	node[v].vis = true;
	node[v].dis = h;
	for(auto i:node[v].adj)
	{
		if(!node[i].vis && !node[i].ringroad)
            DFS2(i,h + 1);
	}
}

void DFS(int v,int par)
{
	node[v].vis = true;
    node[v].par = par;
    for(auto i:node[v].adj)
    {
		if(node[i].vis && par != i)
		{
			int u = v;
			node[v].ringroad = true;
			while(u != i)
			{
				u = node[u].par;
				node[u].ringroad = true;
			}

            clean();

            For(i,0,n)
            {
            	if(node[i].ringroad)
                    DFS2(i,0);
            }

			for(int i=0;i<n;i++)
            {
			    cout << node[i].dis << " ";
			}

			exit(0);
		}

		if(!node[i].vis)
            DFS(i,v);
    }
}

int main()
{
    cin >> n;

    For(i,0,n)
    {
        int a,b;
        cin >> a >> b;
        a--;b--;
        node[a].adj.pb(b);
        node[b].adj.pb(a);
    }

    DFS(0,-1);

	return EXIT_SUCCESS;
}
