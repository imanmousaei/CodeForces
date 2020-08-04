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

string s;
int ans,n,t,ones[maxn],zeros[maxn];

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> s;
    	n = s.size();

    	ans = INF32;

    	fore(i,0,n){
    		ones[i] = 0;
    		zeros[i] = 0;
    	}

    	zeros[0] = (s[0]=='0');
    	ones[0] = (s[0]=='1');

    	fore(i,1,n-1){
			ones[i] = ones[i-1];
			zeros[i] = zeros[i-1];

    		if(s[i]=='1'){
    			ones[i]++;
    		}
    		else{
    			zeros[i]++;
    		}
    	}

    	fore(i,0,n-1){
	    	// ta i, 0 badesh 1 :
	    	ans = min(ans , ones[i] + zeros[n-1]-zeros[i]  );

	    	// ta i, 1 badesh 0 :
	    	ans = min(ans , zeros[i] + ones[n-1]-ones[i]  );
    	}

    	cout << ans << endl;


    }



    return 0;
}