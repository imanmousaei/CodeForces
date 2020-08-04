/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CP(x) cout << "CP " << x << endl;
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 100 + 7;
const ll MOD = 1e9 + 7;

struct Node
{
    ll a,d,dm;
    vi adj;
};

ll n,a[MAX];
Node node[MAX];

void dfs(int v)
{
    cout << a[v] << " ";

    if(node[v].adj.size()==0)
    {
        exit(0);
    }

    dfs(node[v].adj[0]);

}

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]*2==a[j])
            {
                node[i].adj.pb(j);
                node[i].d++;
                node[j].dm++;
            }
            else if(a[i]%3==0 && a[i]/3==a[j])
            {
                node[i].adj.pb(j);
                node[i].d++;
                node[j].dm++;
            }
        }
    }

    int start=0;
    for(int i=0;i<n;i++)
    {
        if(node[i].dm==0)
        {
            start = i;
            break;
        }
    }

    dfs(start);



	return 0;
}
