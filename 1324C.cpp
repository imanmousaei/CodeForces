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

int t,d,n,lastR;
string s;

int main(){
    fastIO;
    cin >> t;
    while(t--){
        d = 0;
    	cin >> s;
        n = s.size();

        s = "R" + s + "R";
        lastR = 0;

    	fore(i,1,n+1){
            if(s[i]=='R'){
                d = max(d,i-lastR);
                lastR = i;
            }
    	}

        
        cout << d << endl;

    
    }



    return 0;
}