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

const int MAX = 3000 + 7;
const int MOD = 1e9 + 7;

struct Node
{
    vi adj;
    bool vis=false,ringroad=false;
    int par=-1,dis=INF;
};

Node node[MAX];
bool cycle = false,stop=false;

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

void backDFS(int v)
{
    while(v!=-1)
    {
        node[v].ringroad = true;
        node[v].dis = 0;
        v = node[v].par;
    }
}

void DFS(int v) /// TODO
{
    if(cycle)
        return;

    stack<int> s;
    s.push(v);

    node[v].vis = true;

    while(!s.empty())
    {
        int fr = s.top();
        s.pop();

        //cout << fr+1 << " ";

        for (auto i:node[fr].adj)
        {
            if (!node[i].vis)
            {
                node[i].par = fr;
                cout << "parent of " << i << " is " << node[i].par << endl;
                s.push(i);
                node[i].vis = true;
            }
            else if(node[i].vis && node[v].par != i)
            {
                //cout << " finish him ";
                node[fr].ringroad = true;
                backDFS(fr);

                cycle = true;
                return;
            }
        }
    }

}

void BFS(int v)
{
    queue<int> q;
    clean();
    q.push(v);
    node[v].vis = true;
    while(!q.empty())
    {
        int fr = q.front();
        for(auto i:node[fr].adj)
        {
            if(node[i].vis || node[fr].dis+1 >=node[i].dis || node[i].dis<=1)
                continue;

            //cout << i << " ";
            q.push(i);
            node[i].vis = true;
            node[i].dis = min(node[i].dis,node[fr].dis + 1); // fr = par(i)
        }
        q.pop();
    }
}

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        a--;b--;
        addEdge(a,b);
    }

    //cout << "node[2].adj : ";
    //print(node[1].adj);
    //cout << " </> ";

    DFS(0);

    for(int i=0;i<n;i++)
    {
        if(node[i].ringroad)
        {
            BFS(i);
        }
    }

    for(int i=0;i<n;i++)
    {
        cout << node[i].dis << " ";
    }

	return EXIT_SUCCESS;
}
