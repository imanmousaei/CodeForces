#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<<#x << " = "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define AT for(int i=0;i<=n;i++){cout << "a[" << i << "] = " << a[i] << endl;}
#define BT for(int i=0;i<=n;i++){cout << "b[" << i << "] = " << b[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e3 + 7;

ll a[MAX],b[MAX],n,m,ans;

ll ok(ll x){
	ll d = b[x%n]-a[0];
	while(d<0){
		d+=m;
	}
	fore(i,0,n-1){
		int tmp = b[(i+x)%n]-a[i];
		// ER(i);
		// ER(a[(i+x)%n]);
		while(tmp<0){
			tmp+=m;
		}
		if(tmp!=d){
			return -1;
		}
	}
	return d;
}

int main(){
    fastIO;
    cin >> n >> m;
    ans = m+1;
    fore(i,0,n-1){
    	cin >> a[i];
    }
    fore(i,0,n-1){
    	cin >> b[i];
    }

    sort(a,a+n);
    sort(b,b+n);

    fore(i,0,n){
    	ll t = ok(i);
    	if(t!=-1){
    		// ER(i);
    		// ER(t);
    		// AT;
    		// BT;
    		ans = min(t,ans);
    	}
    }

    cout << ans << endl;



    return 0;
}