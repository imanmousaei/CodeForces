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

const int MAX = 100 + 7;
const int MOD = 1e9 + 7;

struct Node
{
    vi adj;
    bool vis;
};

Node node[MAX];
char a[10][10];
vi statues;

void addEdge(int v, int u)
{
    node[v].adj.pb(u);
    node[u].adj.pb(v);
}

void DFS(int v,int u,int cnt=0)
{
    if (cnt > 6)
    {
        cout << "WIN";
        exit(0);
    }

    for(int i = -1; i < 2; i++)
    {
        for (int j = -1; j < 2; j++)
        {
            int x = v+i, y = u+j;
            if (x < 0 || x > 7 || y < 0 || y > 7)
				continue;
            if (a[x-cnt-1][y]=='S' && x-cnt>=1)
				continue;
            if (a[x-cnt][y]=='S' && x-cnt>=0)
				continue;

			DFS(x,y,cnt+1);
 		}
    }
}

int main()
{
    for(int i=0;i<8;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin >> a[i][j];
        }
    }

    print(node[57].adj);

    DFS(7,0);

    cout << "LOSE";

	return EXIT_SUCCESS;
}
