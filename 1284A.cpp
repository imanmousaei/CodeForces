#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 20 + 7;
const ll maxm = 2e5 + 7;

int n,m,q,y;
string s[maxn],t[maxn];

int main(){
    fastIO;
    cin >> n >> m;
    fore(i,0,n-1){
    	cin >> s[i];
    }
    fore(i,0,m-1){
    	cin >> t[i];
    }
    cin >> q;
    fore(i,1,q){
    	cin >> y;
    	y--;
    	cout << s[y%n] + t[y%m] << endl;
    }



    return 0;
}