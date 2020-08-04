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

const int MAX = 3e5 + 7;
const int MOD = 1e9 + 7;

struct Node
{
    int c;
    vi adj;
    bool vis = false,mark = false;
};

int n,m,ans=1;
Node node[MAX];
int dp[MAX][47];
vi tr;

void dfs(int v)
{
    node[v].vis = true;
    for(auto i:node[v].adj)
    {
        if(!node[i].vis)
            dfs(i);
    }
    tr.pb(v);
}

int main()
{
    cin >> n >> m;

    for(int i=1;i<=n;i++)
    {
        char tmp;
        cin >> tmp;
        node[i].c = tmp - 'a' ;
    }

    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin >> a >> b;
        if(a==b)
        {
            cout << -1;
            return EXIT_SUCCESS;
        }

        node[a].adj.pb(b);
    }

    for(int i=1;i<=n;i++)
    {
        if(!node[i].vis)
            dfs(i);
    }

    for(auto i:tr)
    {
        int ch = node[i].c;
        dp[i][ch]++;


        for(auto v:node[i].adj)
        {
            if(!node[v].mark)
            {
                cout << -1;
                return EXIT_SUCCESS;
            }

            for(int j=0;j<26;j++)
            {
                if(j==ch)
                {
                    dp[i][j] = max(dp[i][j],dp[v][j]+1);
                }
                else
                {
                    dp[i][j] = max(dp[i][j],dp[v][j]);
                }

                ans = max(ans,dp[i][j]);
            }
        }

        node[i].mark = true;

    }

    cout << ans;

	return EXIT_SUCCESS;
}
