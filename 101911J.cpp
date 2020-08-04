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

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }


int main(){
    fastIO;
    ll a,b,x,y,bmm,counter=0,a1,b1;
    cin>>a>>b>>x>>y;
    bmm=gcd(x,y);
    x=x/bmm;
    y=y/bmm;
    a1=a/x;
    b1=b/y;
    cout<<min(a1,b1)<<endl;
;


    return 0;
}