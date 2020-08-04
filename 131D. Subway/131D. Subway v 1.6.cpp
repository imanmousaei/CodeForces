/**
Programmer : Iman Mousaei

Accepted
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

void dfs2(int r,int k)
{
	node[r].vis = 1;
	node[r].dis = k;
	for(auto x:node[r].adj)
	{
		if(!node[x].vis && !node[x].ringroad)
            dfs2(x,k + 1);
	}
}

void dfs(int r,int par)
{
	node[r].vis = 1;
    node[r].par = par;
    for(auto x:node[r].adj)
    {
		if(node[x].vis && par != x)
		{
			int u = r;
			node[r].ringroad = 1;
			while(u != x)
			{
				u = node[u].par;
				node[u].ringroad = 1;
			}

            clean();

            For(i,1,n+1)
            {
            	if(node[i].ringroad)
                    dfs2(i,0);
            }

			for(int i=1;i<n+1;i++)
            {
			    cout << node[i].dis <<" ";
			}

			exit(0);
		}

		if(!node[x].vis)
            dfs(x,r);
    }
}

int main()
{
    cin >> n;

    For(i,0,n)
    {
        int a,b;
        cin >> a >> b;
        //a--;b--;
        node[a].adj.pb(b);
        node[b].adj.pb(a);
    }

    dfs(1,0);

	return EXIT_SUCCESS;
}
