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

string s;
int n;

int main(){
    fastIO;
    cin >> s;
    n = s.size();

    auto beg = s.begin();

    fore(i,1,n-1){
    	while(s[i]=='/' && s[i-1]=='/'){
    		s.erase(beg+i);
    	}
    }

    //cerr << s << endl;

    n = s.size();
    while(n>1 && s[n-1]=='/'){
    	s.erase(beg+n-1);
    	n = s.size();
    }

    cout << s << endl;


    return 0;
}