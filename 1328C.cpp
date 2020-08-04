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
const ll maxn = 5e4 + 7;
const ll maxm = 2e5 + 7;

int t,n,x[maxn],a[maxn],b[maxn];

int main(){
    fastIO;
    cin >> t;
    
    while(t--){
    	cin >> n;

    	fore(i,1,n){
    		char c;
    		cin >> c;
    		x[i] = c - '0';
    		a[i] = 0;
    		b[i] = 0;
    	}

    	a[1] = 1;
	    b[1] = 1;

    	int i=2;
    	while(i<=n && x[i]%2==0){
    		a[i] = x[i]/2;
    		b[i] = x[i] - a[i];
    		i++;
    	}

    	a[i] = x[i];

    	fore(j,i+1,n){
    		b[j] = x[j];
    	}

    	fore(i,1,n){
    		cout << a[i];
    	}
    	cout << endl;

    	fore(i,1,n){
    		cout << b[i];
    	}
    	cout << endl;


    }



    return 0;
}