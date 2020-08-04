#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define ER(x) cerr<<"# "<<x<<endl;
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

// ll count(ll n){ // adade n chandomin digit e string e
// 	fore(i,0,n){

// 	}
// }

ll k,lg,cnt;

int main(){
    fastIO;
    cin >> k;
    lg = log(k)+1;

    int i;
    for(i=0;cnt<k;i++){
    	cnt += ( pow(10,i+1) - pow(10,i) ) * (i+1) ;
    }

    ER(i);



    return 0;
}