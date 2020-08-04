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

const int INF32 = 1e9;
const ll INF64 = 1e16;
const ll MOD = 1e9 + 7;
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

ll t,n,k,a[maxn],minSum=INF64,maxSum=-INF64;
pll cntSum[maxn*2]; // .F:cnt , .S:index

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> n;
    	fore(i,1,n){
    		cin >> a[i];
    	}
    	fore(i,1,n/2){
    		minSum = min(minSum,a[i]+a[n-i+1]);
    		maxSum = max(maxSum,a[i]+a[n-i+1]);
    		cntSum[a[i]+a[n-i+1]].F++;
    		cntSum[a[i]+a[n-i+1]].S = a[i]+a[n-i+1];
    	}

    	sort(cntSum,cntSum+maxSum);

    	fore(i,0,maxSum){
    		
    	}


    }



    return 0;
}