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

#define DEBUG false
#if DEBUG
#define print(a) for(auto i:a) { cout << i << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#else
#define print(a)
#define printsz(a,sz)
#endif // DEBUG

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e4 + 7;
const int MOD = 1e9 + 7;

struct Node
{
    vi adj;
    bool vis=false;
    int c;
};

Node node[MAX];
int n,cnt,c[MAX];

void clean()
{
    for(int i=0;i<MAX;i++)
        node[i].vis = false;
}

void BFS(int v)
{
    queue<int> q;
    q.push(v);
    node[v].vis = 1;
    if(node[v].c != c[v])
    {
        cnt++;
        node[v].c = c[v];
    }


    while(q.size())
    {
        int x = q.front();
        for(auto i:node[x].adj)
        {
            //cout << x;
            if(!node[i].vis)
            {
                node[i].vis = 1;
                q.push(i);
                node[i].c = node[x].c;
                if(node[i].c != c[i])
                {
                    cnt++;
                    node[i].c = c[i];
                }
            }
        }
        q.pop();
    }
}

int main()
{
    cin >> n;

    For(i,2,n+1)
    {
        int a;
        cin >> a;
        node[i].adj.pb(a);
        node[a].adj.pb(i);
    }

    For(i,1,n+1)
    {
        cin >> c[i];
    }

    BFS(1);


    cout << cnt;

	return EXIT_SUCCESS;
}
