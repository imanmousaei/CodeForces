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
const ll maxn = 5000 + 7;
const ll maxm = 2e5 + 7;

int t,n,a,idx[maxn];

int main(){
    fastIO;
    cin >> t;
    while(t--){
        bool yes = 0;
    	cin >> n;
        fore(i,0,n){
            idx[i] = -1;
        }
    	fore(i,0,n-1){
    		cin >> a;
            if(idx[a]==-1){
                idx[a] = i;
            }
            else if(i-idx[a]>1){
                yes = 1;
            }
    	}

        if(yes){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    



    }



    return 0;
}