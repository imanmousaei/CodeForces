/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define VAL(x) #x << " = " << (x) << "   "
#define SZ(x) ((int) (x).size())
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define FOREACH(i, x) for(__typeof((x).begin()) i = (x).begin(); i != (x).end(); i ++)
#define FOR(i, n) for (int i = 0; i < (n); i ++)
#define arrsize(a) sizeof(a)/sizeof(a[0])

#define DEBUG false
#if DEBUG
#define print(a) for(auto i:a) { cout << i << " " ; } cout << endl;
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; } cout << endl;
#else
#define print(a)
#define printsz(a,sz)
#endif // DEBUG

typedef long long ll;

using namespace std;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 100 + 7;
const int MOD = 1e9 + 7;
const int eps = 1e-8 ;

struct Node
{
    vector<int> par,child,adj;
    bool vis;
    int val;
};

int n,m;
Node node[MAX];
queue<int> q;
vector<int> components;
ll danger = 1;

void BFS(int v)
{
    //int visited_vertixes = 1;
    q.push(v);
    node[v].vis = true;
    while(q.size())
    {
        int first = q.front();

        for(auto i:node[first].adj)
        {
            if(node[i].vis == true)
                continue;

            node[i].vis = true;
            q.push(i);
            node[i].par.pb(first);
            node[first].child.pb(i);
            danger*=2;
            //visited_vertixes++;
        }
        q.pop();
    }
    //components.pb(visited_vertixes);
}

int main()
{
    cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int a,b;
        cin >> a >> b;
        a--;
        b--;
        node[a].adj.pb(b);
        node[b].adj.pb(a);
    }

    for(int i=0;i<n;i++)
    {
        /* Y time gets more?!!!!! #WTF!?!?!!?!
        if(node[i].vis==false)
        {
            BFS(i);
        }
        */
        BFS(i);
    }

    //cout << danger;
    //print(components);

    cout << danger;

	return EXIT_SUCCESS;
}
