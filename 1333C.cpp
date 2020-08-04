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

map<ll, set<ll> > sumsByIndex;
set<ll> zeros;
ll n,a[maxn],sum[maxn],ans;

int main(){
    fastIO;
    cin >> n;
    sumsByIndex[0].insert(0);
    fore(i,1,n){
    	cin >> a[i];
    	sum[i] = sum[i-1] + a[i];
    	sumsByIndex[sum[i]].insert(i);

    	if(a[i]==0){
    		zeros.insert(i);
    	}
    }

    fore(i,1,n){
    	if(a[i]==0){
    		continue;
    	}
    	ll next = INF64, next0 = INF64;
    	if(sumsByIndex[sum[i-1]].size()>=2){
	    	auto it = sumsByIndex[sum[i-1]].find(i-1);
	    	it++;
	    	// ERRR(next,next0,ans);
	    	if(it!=sumsByIndex[sum[i-1]].end()){    		
	    		next = *it;
	    	}
	    }

    	auto it0 = zeros.lower_bound(i);
    	if(it0==zeros.end()){
    		next0 = INF64;
    	}
    	else{
    		next0 = *it0;
    	}

    	ans += min(min(next0,next),n+1) - i ;


    }

    cout << ans<< endl;



    return 0;
}