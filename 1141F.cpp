#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<<"# "<<x<<endl;
#define ERR(x) cerr<<"@ "<<x<<endl;
#define ER2(s,x) cerr<<s<<" "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MAXN = 1500 + 7;


map <int , vector<pii> > v; 
vector<pii> vp,vpii;
// vi vsums;
int n,sum[MAXN],mx=-INF,mn=INF,ans,l,r,idx;

int main(){
    fastIO;
    cin >> n;
	int a;	
    fore(i,1,n){
    	cin >> a;
    	sum[i] = sum[i-1] + a;
    }


    fore(i,1,n){
    	fore(j,1,i){
    		// ER("hi");
    		int Sum = sum[i] - sum[j-1]; // sum[j,i]
    		if(v[Sum].empty() || j>v[Sum].back().second){
	    		v[Sum].push_back({j,i});
	    	}

	    	if(v[Sum].size()>ans){
	    		ans = v[Sum].size();
	    		idx = Sum;
	    	}

    		// mx = max(mx,Sum);
    		// mn = min(mn,Sum);
    	}
    }

	
    // fore(i,mn,mx){
    // 	if(v[i].empty()){
    // 		continue;
    // 	}
    // 	l = v[i][0].first ;
    // 	r = v[i][0].second;
    // 	vpii.clear();
    // 	vpii.push_back({l,r});
    // 	int cnt = 1;
    // 	for(int j=1;j<v[i].size();j++){
    // 		if(v[i][j].first>r){
    // 			r = v[i][j].second;
    // 			l = v[i][j].first;
    // 			vpii.push_back({l,r});
    // 			cnt++;
    // 		}
    // 	}

    // 	if(cnt>ans){
    // 		ans = cnt;
    // 		vp = vpii;
    // 	}


    // }

    cout << ans << endl;
    for(auto ass:v[idx]){
    	cout << ass.first << " " << ass.second << endl;
    }




    return 0;
}