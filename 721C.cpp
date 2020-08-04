/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

// g++ -g -O2 -std=gnu++17 -static $file

#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

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

const ll MAX = 5e3 + 7;
const ll MOD = 1e9 + 7;

int n,m,T,t[MAX][MAX],mx,idx;
bool visited[MAX];
vi adj[MAX];
vi pathTmp;
vvi path;

void DFS(int v,int timeUsed,int len){

    cout << v << " " << timeUsed << " " << len << endl;
    
    if(timeUsed > T){
        cout << " timeUsed error " << v << endl;
        pathTmp.clear();
        pathTmp.push_back(1); 
        return;
    }
    else if(v==n){

        cout << " n error " << v << endl;
        pathTmp.push_back(n);
        path.push_back(pathTmp);
        pathTmp.clear();
        pathTmp.push_back(1);
        return;
    }
    
    else if(adj[v].empty()){
        //pathTmp.pop_back();
        cout << v << " is empty error " << endl;
        return;
    }
    

    if(v!=1){
        pathTmp.push_back(v);
    }

    visited[v] = true;

    for(int u:adj[v]){
        if(visited[u]){
            continue;
        }

        //pathTmp.clear();
        DFS(u,timeUsed+t[v][u],len+1);




    }   


}

int main()
{
    pathTmp.push_back(1);

    cin >> n >> m >> T;
    cout << endl;

    for(int i=0;i<m;i++){
        int a,b,time;
        cin >> a >> b >> time;
        adj[a].push_back(b);
        t[a][b] = time;
    }

/*
    for(int i=0;i<=n;i++){
        cout << i << " " << adj[i].empty() << endl;
    }
*/
	
    DFS(1,0,0);

    cout << endl;
    for(auto i:path){
        for(auto j:i){
            cout << j << " ";
        }
        cout << endl;
    }


    for(int i=0;i<path.size();i++){

        vi p = path[i];
        if(p.size()>mx){
            mx = p.size();
            idx = i;
        }
        
    }

    //cout << adj[1].size() << endl << endl;
    cout << mx << endl;


    for(auto a:path[idx]){
        cout << a << " "; 

    }


	cout << endl;

	return 0;
}