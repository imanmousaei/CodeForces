#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define pb push_back
#define LOG(x) for(int i=0;i<=n;i++){cout << #x << "[" << i << "] = " << x[i] << endl;}
#define LOG2(x) for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << #x << "[" << i << "][" << j << "] = " << x[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)
#define forn(i,l,r) for(int i = l ; i >= r ; i--)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

int n,m,k;

int main(){
    fastIO;
    cin >> n >> m >> k;

    cout << 2*n*m << endl;
    fore(i,1,n){
    	fore(j,1,m-1){
    		if(i%2){
		    	cout << "R";
		    }
		    else{
		    	cout << "L";
		    }
    	}
    	cout << "D";
    }

    fore(i,1,n){
    	fore(j,1,m-1){
    		if(i%2){
		    	cout << "L";
		    }
		    else{
		    	cout << "R";
		    }
    	}
    	cout << "U";
    }

    cout << endl;



    return 0;
}