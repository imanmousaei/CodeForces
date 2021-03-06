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

ll t,n,pos[MAX];


int main(){
    fastIO;
    cin >> t;
    while(t--){
        cin >> n;
        ll start=0,s=0,l,r,dif;
        string ans = "1";

        fore(i,1,n){
            int a;
            cin >> a;
            pos[a] = i;
        }

        l = pos[1];
        r = pos[1];

        fore(i,2,n){
            l = min(l,pos[i]);
            r = max(r,pos[i]);
            dif = r - l + 1;

            if(dif==i){
                ans += "1";
            }
            else{
                ans += "0";
            }

        }
        
        cout << ans << endl;



    }



    return 0;
}