/**
Coder : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define F first
#define S second

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 200 + 7;
const int MOD = 1e9 + 7;

int visited[MAX]; // 2 : visited & finished DFS in it , 1 : still DFSing in it's children , 0 : not visited

class Node
{

public :

    pii ht;
    vector<Node> adj;
/*
    Node(int h,int t)
    {
        ht.F = h;
        ht.S = t;
    }
*/
    void add_adj(Node aj)
    {
        adj.push_back(aj);
    }

};


int DFS(Node start, Node finish , int cnt=0)
{
    if(start.ht.F==finish.ht.F && start.ht.S==finish.ht.S)
        return cnt;

    for(Node i:start.adj)
    {
        if(DFS(start.adj[i]))
    }
}


Node node[MAX];

int main()
{
    int H,T,R,n,m,h[MAX],t[MAX];
    cin >> H >> T >> R >> n;
    for(int i=0;i<n;i++)
    {
        int hi,ti;
        cin >> hi >> ti;
    }
    cin >> m;
    for(int i=0;i<m;i++)
    {
        int hi,ti;
        cin >> hi >> ti;

    }

	return EXIT_SUCCESS;
}
