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

int n,a,b,cnt;
string s;

int main(){
    fastIO;
    cin >> n >> a >> b >> s;
    s = "!" + s;

    fore(i,1,n){
    	if(s[i]=='.'){
    		if(a>=b){
	    		if(a>0 && s[i-1]!='a'){
	    			s[i] = 'a';
	    			a--;
	    			cnt++;
	    		}
	    		else if(b>0 && s[i-1]!='b') {
	    			s[i] = 'b';
	    			b--;
	    			cnt++;
	    		}
    		}
    		else{
	    		if(b>0 && s[i-1]!='b') {
	    			s[i] = 'b';
	    			b--;
	    			cnt++;
	    		}

    			else if(a>0 && s[i-1]!='a'){
	    			s[i] = 'a';
	    			a--;
	    			cnt++;
	    		}

    		}
    	}
    }

    //cerr << s << endl;

    cout << cnt << endl;



    return 0;
}