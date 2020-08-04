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
const int MAX = 200 + 7;
const int MOD = 1e9 + 7;

bool edge[MAX][MAX];
int pos, maxdis, n;

void DFS(int cur, int par=-1 , int dis=0)
{
	if (dis > maxdis)
    {
        pos = cur;
        maxdis = dis;
    }

	for(int i=0;i<n;i++)
	{
	    if (i != par && edge[cur][i])
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
	cin >> n;
	for(int i=0;i<n-1;i++)
	{
		int u, v;
		cin >> u >> v;
		u--; v--;
		edge[u][v] = true;
		edge[v][u] = true;
	}

	int mx = 0;
	for(int i=0;i<n;i++)
	{
	    for(int j=i+1;j<n;j++)
	    {
	        if (edge[i][j])
            {
                edge[i][j] = edge[j][i] = false;
                mx = max(mx, maxlen(i)*maxlen(j));
                edge[i][j] = edge[j][i] = true;
            }
	    }
	}

	cout << mx << endl;

	return EXIT_SUCCESS;
}
