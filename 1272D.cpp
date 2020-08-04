#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<<#x << " = "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

int n,a[MAX],ans,r;
vi bad;

int LIS(int l,int r,int bi){
	if(a[l+1]<a[l]){
		return 0;
	}
	return r-1-l;
}

int main(){
    fastIO;
    cin >> n;
    fore(i,1,n){
    	cin >> a[i];
    }
    fore(i,2,n-1){
    	if(a[i]>=a[i-1] && a[i]>=a[i+1]){
    		bad.push_back(i);
    	}
    	else if(a[i]<=a[i-1] && a[i]<=a[i+1]){
    		bad.push_back(i);
    	}
    }

    int sz = bad.size();
    if(sz==0){
    	ans = n;
    }
    else if(sz==1){
    	ans = n-1;
    }
    else{
	    ans = LIS(0,a[bad[1]],bad[1]);
	    for(int l=1;l<bad.size();l++){
	    	ER(bad.size());
	    	if(l+2>=bad.size()){
	    		break;
	    	}
	    	r = a[bad[l+2]];
	    	ans = max(ans,LIS(l,r,bad[l+2]));

	    }
	}

    cout << ans << endl;



    return 0;
}