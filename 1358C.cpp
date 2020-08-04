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
#define fore(i,l,r) for(ll i = l ; i <= r ; i++)
#define forn(i,l,r) for(int i = l ; i >= r ; i--)

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF32 = 1e9;
const ll INF64 = 1e16;
const ll MOD = 1e9 + 7;
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

ll t,x[5],y[5];

ull solve(ll r,ll d){
	ull ans = 1;
	fore(i,1,d){
		ans *= (r+i);
		ans /= i;		
	}
	return ans;
}

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> x[1] >> y[1] >> x[2] >> y[2];
    	ll r = x[2] - x[1];
    	ll d = y[2] - y[1];

    	// WLOG r>=d :
    	if(r<d){
    		swap(r,d);
    	}

    	ull ans = solve(r,d);
    	cout << ans << endl;


    }



    return 0;
}