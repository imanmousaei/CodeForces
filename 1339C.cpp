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
const ll maxn = 1e5 + 7;
const ll maxm = 2e5 + 7;

string decimaltoBinary(ll a){ // reverse binary
    string ans="";
    while(a>0){
        ll d = a%2;
        a/=2;
        ans += to_string(d);
    }
    // reverse(ans.begin(),ans.end());
    return ans;
}

ll t,n,a[maxn];
vll pow2;

int main(){
    fastIO;

    pow2.pb(1);
    for(int i=1; pow2[i-1]*2 <= 2e9 ; i++ ){
    	pow2.pb(pow2[i-1]*2);
    }


    cin >> t;
    while(t--){
    	ll ans = 0;
    	cin >> n;
    	fore(i,1,n){
    		cin >> a[i];
    	}

    	fore(i,1,n-1){
    		if(a[i]<=a[i+1]){
    			continue;
    		}
    		ll d = a[i] - a[i+1];

    		// ER(d);

    		string binary = decimaltoBinary(d);
    		ll binDif = 0;

    		for(ll j=0;j<binary.size();j++){
    			if(binary[j]=='1'){
    				ans = max(ans,j+1);
    				binDif += pow2[j];
    			}
    		}

    		a[i+1] += binDif;


    	}

    	cout << ans << endl;


    }



    return 0;
}