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

ll a,b,t;

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> a >> b;
    	if(b>a){
    		swap(a,b);
    	}

    	ll d = a/b;
    	ll lg = log2(d);
    	ll cnt = 0;

    	if(a%b!=0 || (1LL<<lg)!=d ){
    		cout << -1 << endl;
    		continue;
    	}

    	// ERR(d,lg);

    	while(lg>0){
    		if(lg>=3){
    			cnt++;
    			lg-=3;
    		}
    		else if(lg>=2){
    			cnt++;
    			lg-=2;
    		}
			else if(lg>=1){
    			cnt++;
    			lg-=1;
    		}
    	}

    	cout << cnt << endl;

    	



    }




    return 0;
}