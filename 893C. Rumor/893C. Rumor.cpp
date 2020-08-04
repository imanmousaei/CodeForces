/**
Coder : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

vector <int> vc[MAX];

pair<ll,int> p[MAX];

bool mark[MAX];

void dfs(int vertex)
{
	mark[vertex] = true;
	for(int i = 0; i < vc[vertex].size(); i++) // for(int u : adj[v])  =  foreach in PHP
    {
		int u = vc[vertex][i];
		if(mark[u]==0)
			dfs(u);
	}
}

int main()
{
    ___
	ll n, m, cnt = 0;
	cin >> n >> m;

	for(int i = 0; i < n; i++)
    {
        cin >> p[i].first; // money
        p[i].second = i;
    }

	while(m--)
    {
		int x, y;
		cin >> x >> y;
        x--;
        y--;

		vc[x].push_back(y);
		vc[y].push_back(x);
	}

	sort(p,p+n);

	for(int i = 0; i < n; i++)
	{
	    if(mark[p[i].second]==0)
        {
            dfs(p[i].second);
            cnt += p[i].first; // money
        }
	}

	cout << cnt;

	return EXIT_SUCCESS;
}
