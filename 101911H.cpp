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



int main(){
    fastIO;
    int n,m,x1,y1,x2,y2,sum=0;
    cin>>n>>m>>x1>>y1>>x2>>y2;
    sum+=(x2-x1+1)*((y1-1)%2);
    sum+=((m-y2)%2)*(x2-x1+1);
    sum+=(n-(x2-x1+1))*(m%2);
    if(sum%2==0){
        cout<<sum/2<<endl;
    }else{
        cout<<sum/2+1<<endl;
    }


    return 0;
}