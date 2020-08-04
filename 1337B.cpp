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
#define LOG3(x) for(int i=0;i<=H;i++){for(int j=0;j<=n;j++){for(int k=0;k<=m;k++){cout << #x << "[" << i << "][" << j << "][" << k << "] = " << x[i][j][k] << endl;}}}
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

int t,n,m,H;

bool dfs(int h,int v,int l) {
	// ERRR(h,v,l);
	if(h<=0){
		return 1;
	}

    if(v>0 && h>h/2+10){
    	return dfs(h/2+10,v-1,l);
    }
    else if(l>0){
    	return dfs(h-10,v,l-1);
    }
    return 0;
}

int main(){
    fastIO;

    cin >> t;
    while(t--){
    	cin >> H >> n >> m;
    	// bool dead = 0;
    	// if(H<=0){
    	// 	cout << "YES" << endl;
    	// 	dead = 1;
    	// 	break;
    	// }


    	// while(m>0 || n>0){
    	// 	ERRR(H,n,m);
    	// 	if(m<=0 || (H-10>=H/2+10 && n>0) ){
    	// 		H = H/2 + 10;
	    // 		n--;
		   //  	if(H<=0){
		   //  		cout << "YES" << endl;
		   //  		dead = 1;
		   //  		break;
		   //  	}
		   //  }
		   //  else if(m>0){
		   //  	H -= 10;
	    // 		m--;
		   //  	if(H<=0){
		   //  		cout << "YES" << endl;
		   //  		dead = 1;
		   //  		break;
		   //  	}
		   //  }

    	// }

  //   	if(!dead){
		// 	cout << "NO" << endl;
		// }

		if(dfs(H,n,m)){
			cout << "YES" << endl;
		}
		else{
			cout << "NO" << endl;
		}

		// LOG3(dp);

    }



    return 0;
}