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
const ll maxn = 500 + 7;
const ll maxm = 2e5 + 7;

int n,k,val[maxn],idx[maxn],removed,added;
bool before[maxn],after[maxn];
set<int> beforeSet;

int main(){
    fastIO;
    cin >> n >> k;
    fore(q,1,n){
	    if(q>1){
	    	fore(j,q,n){
	    		// if(k+q>n){

	    		// }
		    	if(j!=idx[q]){
		    		removed = j;
		    		added = k+q;
		    		break;
		    	}
		    }

		    cout << "? " << added << " ";
	    }
	    else{
	    	cout << "? ";
	    }

	    fore(j,1,k){
	    	if(j!=removed){
		    	cout << j << " ";
		    }
	    }
	    cout << endl;

	    cin >> idx[q] >> val[q];

	    if(q>1){
	    	if(val[q]>val[q-1]){
	    		before[removed] = 1;
	    		after[added] = 1;
	    		beforeSet.insert(removed);
	    	}
	    	else if(val[q]<val[q-1]){
	    		after[removed] = 1;
	    		before[added] = 1;
	    		beforeSet.insert(added);
	    	}
	    	else{
	    		if(after[removed] || after[added]){
	    			after[removed] = 1;
	    			after[added] = 1;
	    		}
	    		else if(before[removed] || before[added]){
	    			before[removed] = 1;
	    			before[added] = 1;
	    			beforeSet.insert(added);
	    			beforeSet.insert(removed);
	    		}
	    	}
	    }
	}



    return 0;
}