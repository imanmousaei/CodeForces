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

ll n,t,cnt[100];



int main(){
    fastIO;
    cin >> t;

    cnt[1] = 1;

	fore(i,2,60){
		cnt[i] = (cnt[i-1]+1)*2-1;
	}

    while(t--){
    	cin >> n;
    	
    	ll ans = 0;

    	while(n>0){
	    	ll pow2 = 1;
	    	fore(i,0,60){
	    		if(n>=pow2-1){
	    			ans += cnt[i];
	    		}
	    		else{
	    			n -= pow2/2-1;
	    			if(n>=1){
				    	ans += i;
				    	n--;
				    }
	    			// ERRR(ans,n,i);
	    			break;
	    		}
	    		pow2*=2;
	    	}
			// ERR(ans,n);
	    }

    	



    	// ERR(n,i);









   //  	while(n>0){
	  //   	ll pow2 = 1;
			// // ERR(n,ans);
	  //   	fore(k,0,60){
	  //   		pow2 *= 2;
	  //   		if(k==0){
	  //   			pow2 = 1;
	  //   		}


	  //   		if(pow2 <= n){
	  //   			ans += k+1;
	  //   		}
	  //   		else{
	  //   			n -= pow2/2;
	  //   			break;
	  //   		}
	  //   	}
	  //   }

    	cout << ans << endl;
    	

    }




    return 0;
}