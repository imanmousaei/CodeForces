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
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 100 + 7;
const ll maxm = 2e5 + 7;

int t,n,x,cntNotTaken[maxn];
bool isTaken[maxn];

int main(){
    fastIO;
    cin >> t;    
    while(t--){
    	bool f = 1;
    	cin >> n >> x;
    	fore(i,0,100){
    		cntNotTaken[i] = 0;
    		isTaken[i] = 0;
    	}
    	int a;
    	fore(i,1,n){
    		cin >> a;
    		isTaken[a] = 1;
    	}
    	cntNotTaken[0] = 0;
    	fore(i,1,102){
    		cntNotTaken[i] = cntNotTaken[i-1];
    		if(!isTaken[i]){
    			cntNotTaken[i]++;
    		}
    		if(cntNotTaken[i]>x){
    			cout << i-1 << endl;
    			f = 0;
    			break;
    		}
    	}

    	if(f){
    		cout << 100 + x - cntNotTaken[100] << endl;
    	}

    }



    return 0;
}