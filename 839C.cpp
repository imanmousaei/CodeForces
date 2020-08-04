/**
Programmer : Iman Mousaei

Accepted
**/

#include <iostream>
#include <list>
#include <vector>
#include <iomanip>
#include <cmath>
#include <limits>

#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector< vector<int> > vvi;
typedef vector<ll> vll;
typedef pair<int, int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e5 + 7;
const ll MOD = 1e9 + 7;

vi adj[MAX];
int n, len[MAX];
long double p[MAX],Ex;
bool visited[MAX];



void BFS(int v)
{
    list<int> q;

    visited[v] = true;
    q.push_back(v);

    while (!q.empty())
    {
        v = q.front();
        //cout << v << " " << len[v] << " " << p[v] << endl;
        q.pop_front();

        double deg = adj[v].size();

        if(v!=1){
            deg--;
        }
        
        for ( auto i :adj[v])
        {
            if (!visited[i])
            {
                //setprecision(20);
                p[i] = deg * p[v];
                len[i] = len[v]+1;
                visited[i] = true;
                q.push_back(i);
                if(adj[i].size()==1){
                    
                    Ex += double(double(len[i]) / p[i]);
                }
            }
        }
    }
}

int main(void)
{
    p[1] = 1;

    cin >> n;
    //cout << n << endl;
    for (int i = 0; i < n-1; i++)
    {
        int a, b;
        cin >> a >> b;
        //cout << "cp0";

        adj[a].push_back(b);
        //cout << "cp1";
        adj[b].push_back(a);
    }

    BFS(1);

    cout << fixed << setprecision(20) << Ex << endl;

    return 0;
}
