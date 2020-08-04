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
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

ll H,n,d[MAX],sum,day,minute;
bool imp = 1;

int main(){
    fastIO;
    cin >> H >> n;
    fore(i,1,n){
    	cin >> d[i];
    	sum+=d[i];
    	if(sum<0 && -sum>=H){
    		imp = 0;
    	}
    }

    if(sum<0){
    	imp = 0;
    }

    if(imp){
    	cout << -1 << endl;
    	return 0;
    }



    if(sum==0){
    	day = 0;
    	minute = 0;
    }
    else{
    	day = -H/sum;
	}



    if(day==0){
    	minute = 0;
    }
    else if(day<=3){
    	day = 0;
    	minute = 0;
    }
    else{
	    day-=3;
	    H+=day*sum;
	    minute = day*n;
	}


    // ER(sum);
    // ER(day);
    // ER(minute);
    // ER(H);

    while(1){
	    fore(i,1,n){
	    	minute++;
	    	H+=d[i];
	    	if(H<=0){
	    		cout << minute << endl;
	    		return 0;
	    	}
	    }
	}



    return 0;
}