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
const ll MAX = 1e5 + 7;

int t,n,l[MAX],r[MAX];

int main(){
    fastIO;
    cin >> t;
    while(t--){
        memset(l,0,sizeof(l));
        memset(r,0,sizeof(r));

        cin >> n;

        fore(i,0,n-1){
            cin >> l[i] >> r[i];
        }

        sort(l,l+n,greater<int>()); // max l
        sort(r,r+n); // min r

        int diff = l[0]-r[0]; 

        if(diff>0){ // r<l
            cout << diff << endl;
        }
        else{
            cout << 0 << endl;
        }


    }



    return 0;
}