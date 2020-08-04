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
const ll maxn = 2e3 + 7;
const ll maxm = 2e5 + 7;

int t,n,a[maxn];

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> n;
    	fore(i,1,n){
    		cin >> a[i];
    	}
    	int ans = 1;
    	fore(i,1,26){
    		fore(j,1,26){
    			int cnta1 = 0 , cntb = 0 , cnta2 = 0;

    			if(i==j){
    				int cnt = 0;
    				fore(k,1,n){
    					if(a[k]==i){
    						cnt++;
    					}
    				}
    				ans = max(ans,cnt);
    				continue;
    			}

    			int k = 1;
    			while(a[k]!=j && k<=n){
    				if(a[k]==i){
    					cnta1++;
    				}
    				k++;
    			}
    			// if(cnt==0){
    			// 	continue;
    			// }

    			while(a[k]!=i && k<=n){
    				if(a[k]==j){
    					cntb++;
    				}
    				k++;
    			}
    			while(k<=n){
    				if(a[k]==i){
    					cnta2++;
    				}
    				k++;
    			}

    			ERR(i,j);
    			ERRR(cnta1,cntb,cnta2);

    			ans = max(ans, min(cnta1,cnta2)*2 + cntb);

    		}
    	}

    	cout << ans << endl;


    }



    return 0;
}