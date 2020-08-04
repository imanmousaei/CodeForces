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
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

int n,sum=0,start = -1,cnt;
string s;
bool correct = 1;

int main(){
    fastIO;
    cin >> n >> s;

    fore(i,0,n-1){
    	sum += ( s[i]=='(' ? +1 : -1 );

    	if(sum<0){
    		correct = 0;
    	}

    	if(sum==0 && !correct){
    		// ER(i);
    		cnt += i - start;
    		start = i;
    		correct = 1;
    	}

    	if(sum==0 && correct){
    		start = i;
    		correct = 1;
    	}

    }

    if(sum==0){
	    cout << cnt << endl;
	}
	else{
		cout << -1 << endl;
	}


    return 0;
}