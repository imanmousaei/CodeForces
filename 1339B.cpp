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

ll t,n,a[maxn];

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> n;
    	fore(i,0,n-1){
    		cin >> a[i];
    	}

    	sort(a,a+n);

    	vll ans;

    	fore(i,0, ceil(n/2.0) - 1 ){
    		ans.pb(a[i]);
    		if(i != n-i-1){
    			ans.pb(a[n-i-1]);
    		}
    	}

    	reverse(ans.begin(),ans.end());

    	for(auto a:ans){
    		cout << a << " ";
    	}
    	cout << endl;

    }



    return 0;
}