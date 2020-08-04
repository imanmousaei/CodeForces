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
const ll maxn = 100 + 7;
const ll maxm = 2e5 + 7;

int t,n,a;
vi odd,even;

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	odd.clear();
    	even.clear();
    	cin >> n;
    	fore(i,1,n){
    		cin >> a;
    		if(a%2==0){
    			even.push_back(i);
    		}
    		else{
    			odd.push_back(i);
    		}
    	}
    	if(even.size()>=1){
    		cout << 1 << endl << even[0] << endl;
    	}
    	else if (odd.size()>=2){
    		cout << 2 << endl << odd[0] << " " << odd[1] << endl;
    	}
    	else{
    		cout << -1 << endl;
    	}


    }






    return 0;
}