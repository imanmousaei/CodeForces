#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
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

double a,b,c,delta,x1,x2;

int main(){
    fastIO;

    cin >> a >> b >> c;

    delta = b*b-4*a*c;

    //cerr << delta << endl;
    

    if(a==0){
    	if(b==0){
    		if(c==0){
	    		cout << -1 << endl;
	    		return 0;
    		}
    		cout << 0 << endl;
    		return 0;	
    	}
    	x1 = -c/b;
    	cout << 1 << endl;
    	cout << fixed << setprecision(10) << x1 << endl;

    }
    else if(delta<0){
    	cout << 0 << endl;
    }
    else if(delta==0){
    	x1 = -b / (2*a);
    	
    	cout << 1 << endl;
    	cout << fixed << setprecision(10) << x1 << endl;
    }
    else{
    	x1 = ( -b + sqrt(delta)) / (2*a);
	    x2 = ( -b - sqrt(delta)) / (2*a);	
    	
    	cout << 2 << endl;
    	cout << fixed << setprecision(10) << min(x1,x2) << endl;
    	cout << fixed << setprecision(10) << max(x1,x2) << endl;
    
    }



    return 0;
}