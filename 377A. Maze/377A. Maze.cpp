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
#define EPS (1e-8)
#define arrsize(a) sizeof(a)/sizeof(a[0])

#define DEBUG false
#if DEBUG
#define print(a) for(auto i:a) { cout << i << " " ; } cout << endl;
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#else
#define print(a)
#define printsz(a,sz)
#endif // DEBUG

typedef long long ll;

using namespace std;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 500*500 + 7;
const int MOD = 1e9 + 7;

struct Node
{
    vector<int> adj,par,child;
    bool vis;
    int val;
};

char a[MAX];
Node node[MAX];
queue<int> q;
int n,m,k,s,visited_vertixes=1;

void BFS(int v)
{
    q.push(v);
    node[v].vis = true;
    while(q.size())
    {
        int fr = q.front();

        for(auto i:node[fr].adj)
        {
            if(visited_vertixes==s-k)
                return;
            if(node[i].vis==false)
            {
                q.push(i);
                node[i].vis = true;
                node[i].par.pb(fr);
                node[fr].child.pb(i);
                visited_vertixes++;
            }
        }

        q.pop();
    }
}

int main()
{
    cin >> n >> m >> k;

    for(int i = 0 ; i<m*n ; i++)
    {
        cin>>a[i];
        if(a[i]=='.') // amount of vertexes
            s++;
    }

    for(int i = 0 ; i<m*n ; i++)
    {

        if( i%m != m-1 )
        {
            if(a[i]=='.' && a[i+1]=='.')
            {
                node[i].adj.pb(i+1);
                node[i+1].adj.pb(i);
            }

        }

        if(a[i]=='.' && a[i+m]=='.')
        {
            node[i].adj.pb(i+m);
            node[i+m].adj.pb(i);
        }

    }

    int root = 0;
    for(int i = 0 ; i<m*n ; i++)
    {
        if(a[i]=='.')
        {
            root = i;
            break;
        }
    }

    node[root].par.pb(-1);

    BFS(root);

    for(int i = 0 ; i<m*n ; i++)
    {
        if(a[i]!='.')
        {
            cout << a[i];
        }
        else
        {
            if(node[i].vis == false)
            {
                cout << 'X';
            }
            else
            {
                cout << a[i];
            }
        }

        if(i%m==m-1)
        {
            cout << endl;
        }
    }



	return EXIT_SUCCESS;
}
