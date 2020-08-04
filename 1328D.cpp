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

int q,n,t[maxn],c[maxn],k,lastSame;

int main(){
    fastIO;
    cin >> q;
    while(q--){
    	cin >> n;
    	fore(i,1,n){
    		cin >> t[i];
    		c[i] = 0;
    	}

    	c[1] = 1;
    	k = 1;
    	lastSame = n+1;

    	fore(i,2,n){
    		if(t[i]==t[i-1]){
    			c[i] = c[i-1];
    			lastSame = i;
    		}
    		else {
    			c[i] = 3 - c[i-1];
    			k = 2;
    		}
    	}

    	ER(c[n]);
    	ER(lastSame);

    	if(t[1]!=t[n] && c[1]==c[n]){
    		c[lastSame] = 3 - c[lastSame];
	    	fore(i,lastSame+1,n){
	    		if(t[i]==t[i-1]){
	    			c[i] = c[i-1];
	    		}
	    		else {
	    			c[i] = 3 - c[i-1];
	    			k = 2;
	    		}
	    	}
	    }

    	if(t[1]!=t[n] && c[1]==c[n]){
    		c[n] = 3;
    		k = 3;
    	}
    	

    	cout << k << endl;
    	fore(i,1,n){
    		cout << c[i] << " ";
    	}
    	cout << endl;

    }



    return 0;
}