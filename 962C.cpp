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

set<string> squares; 
ll n;

int solve(string s,int cnt){
	if(squares.count(s)){
		return cnt;
	}

	int ans = INF32;
	int sz = s.size();

	fore(i,0,sz-1){
		string tmp = s.substr(0,i) + s.substr(i+1,sz-i-1);
		// ER(tmp);
		ans = min(ans , solve(tmp,cnt+1) );
	}
	return ans;
}

int main(){
    fastIO;
    cin >> n;
    for(ll i=1;i*i<=n;i++){
    	squares.insert(to_string(i*i));
    }

    ll ans = solve(to_string(n),0);
    if(ans == INF32){
    	ans = -1;
    }

    cout << ans << endl;



    return 0;
}