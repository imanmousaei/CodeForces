#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

int x[10],y[10],x3,x4,y3,y4,mn,mx;
vi ans;

int main(){
    fastIO;
    cin >> x3 >> y3 >> x4 >> y4;

    if(x3==x4){
    	cout << x3 + abs(y4-y3) << " " << min(y3,y4) << " ";
    	cout << x3 + abs(y4-y3) << " " << max(y3,y4) << " ";
    	return 0;
    }
    else if(y3==y4){
    	cout << min(x3,x4) << " " << y3 + abs(x4-x3) << " ";
    	cout << max(x3,x4) << " " << y3 + abs(x4-x3) << " ";
    	return 0;
    }
    else if(abs(y4-y3) != abs(x4-x3)){
    	cout << -1 << endl;
    	return 0;
    }

    // mn = min(x3,min(x4,min(y3,y4)));
    // mx = max(x3,max(x4,max(y3,y4)));

    x[1] = min(x3,x4);
    y[1] = min(y3,y4);

    x[2] = max(x3,x4);
    y[2] = max(y3,y4);

    x[3] = min(x3,x4);
    y[3] = max(y3,y4);

    x[4] = max(x3,x4);
    y[4] = min(y3,y4);

    fore(i,1,4){
    	if( (x[i]==x3 && y[i]==y3) || (x[i]==x4 && y[i]==y4) ){
    		// ER(i);
    		// ER(x[i]);
    		// ER(y[i]);
    	}
    	else{
    		// ER(i);
    		// ER(x[i]);
    		// ER(y[i]);

    		// ans.push_back(x[i]);
    		// ans.push_back(y[i]);
	    	cout << x[i] << " " << y[i] << " ";

    	}
    }

    // if(ans.size()>4){
    // 	cout << -1 << endl;
    // }
    // else{
    // 	for(auto a:ans){
    // 		cout << a << " ";
    // 	}
    // }

    // fore(i,3,4){
    // 	cout << x[i] << " " << y[i] << " ";
    // }



    return 0;
}