#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define push_back pb
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

ll n,a[maxn],b[maxn],cnt,maxdif;
map<int,int> cntdif;

int binarySearch(int i,int l, int r) 
{ 
    if (r >= l) { 
        int mid = l + (r - l) / 2; 
  
        if ( mid+1==n ||
           (a[i] + a[mid] > b[i] + b[mid] &&
            a[i] + a[mid+1] <= b[i] + b[mid+1]) ) {
            return mid; 
        }
  
        if (a[i] + a[mid] > b[i] + b[mid]) {
            return binarySearch(l, mid - 1, i); 
        }
  
        return binarySearch(mid + 1, r, i); 
    } 
    return 0; 
} 



int main(){
    fastIO;
    cin >> n;
    fore(i,0,n-1){
    	cin >> a[i];
    }
    fore(i,0,n-1){
    	cin >> b[i];
    	cntdif[a[i]-b[i]]++;
    	maxdif = max(maxdif,a[i]-b[i]);
    }

    for(int i = maxdif-1;i>=-maxdif;i--){
    	cntdif[i] += cntdif[i+1];
    }

    fore(i,0,n-1){
    	cnt += cntdif[a[i]-b[i]];
    	ER(cnt);
    }

    cout << cnt << endl;



    return 0;
}