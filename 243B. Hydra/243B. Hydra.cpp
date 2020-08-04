/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define For(i,a,b) for (int i=a;i<b;i++)
#define Ford(i,a,b) for (int i=a;i>=b;i--)
#define iOS ios_base::sync_with_stdio(false);
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

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;


struct Node
{
    int d=0;
    bool vis,inv,inu;
    vi adj;
};

int n,m,h,t;
Node node[MAX];
int Delta;
bool flag[MAX];

bool cmp(Node v1,Node v2)
{
    return (v1.d >= v2.d);
}

bool hydra(int v,int u)
{
    int common,vv,uu;
    for(auto i:node[v].adj)
    {
        node[i].inv = true;
    }

    for(auto i:node[u].adj)
    {
        if(node[i].inv)
            common++;
    }

    if(node[v].d+node[u].d-common==t+h+2) // hydra = YES
    {
        cout << "YES" << endl;
        cout << u << " " << v << endl;

        for(auto i:node[v].adj)
        {
            if(node[i].inv && vv==t-node[v]-1)
                continue;
            else
            {
                node[i].vis = true;
                cout << i << " ";
            }
        }
    }
    else
    {
        //TODO : clear inv
    }

}


int main()
{
    cin >> n >> m >> h >> t ;

    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin >> a >> b;
        node[a].adj.pb(b);
        node[a].d++;
        Delta = max(Delta,node[a].d);
        node[b].adj.pb(a);
        node[b].d++;
        Delta = max(Delta,node[b].d);
    }

    //sort(node,node+n+1,cmp);

    for(int v=1;v<=n;v++)
    {
        for(int u=1;u<=n;u++)
        {
            if(find(node[v].adj.begin(), node[v].adj.end(), u) != vector.end()) // if v<->u
            {
                if(node[v].d>=h+t+1 && node[u].d>=h+t+1)
                {
                    cout << "YES" << endl;
                    yeah_baby(v,u);
                    return EXIT_SUCCESS;
                }
                else if (node[u].d>=h+1 && node[v].d>=t+1)
                {
                    if(hydra(v,u))
                    {
                        return EXIT_SUCCESS;
                    }
                }
            }
        }
    }



	return EXIT_SUCCESS;
}
