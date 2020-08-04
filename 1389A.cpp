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

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll lcm(ll a, ll b) {
	return a*b / gcd(a,b);
}

ll t,l,r;

bool canFind(ll n){
	// ER(n);
	ll half = n/2 + 1;
	ll m = n;
	forn(i,half,2){
		while(n%i==0){
			n/=i;
			// ERRR(m,i,lcm(m,m+i));
			if(m+i<=r && lcm(m,m+i)<=r){
				cout << m << " " << m+i << endl;
				return true;
			}
		}
	}

	if(m+1<=r && lcm(m,m+1)<=r){
		cout << m << " " << m+1 << endl;
		return true;
	}

	if(m+m<=r && lcm(m,m+m)<=r){
		cout << m << " " << m+m << endl;
		return true;
	}


	return false;
}


int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> l >> r;
    	if(l*2<=r){ // lcm
    		cout << l << " " << l*2 << endl;
    	}
    	else{
    		cout << "-1 -1" << endl;
    	}
    	
    }



    return 0;
}