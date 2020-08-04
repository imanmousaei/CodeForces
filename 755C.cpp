#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CMPT for(int i=0;i<=n;i++){cout << "cmp[" << i << "] = " << cmp[i] << endl;}
#define CP(s,x) cout<<s<<" "<<x<<endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

ll n,cnt,cmp[MAX];

int main(){
    fastIO;
    cin >> n;
    for(int i=1;i<=n;i++){
        int a;
        cin >> a;
        if(cmp[i]==0 && cmp[a]==0){
            cnt++;
            cmp[i] = cnt;
            cmp[a] = cnt;
        }
        else if(cmp[i]==0){
            cmp[i] = cmp[a];
        }
        
        else if(cmp[a]==0){
            cmp[a] = cmp[i];
        }

    }

    CMPT;

    cout << cnt << endl;


    return 0;
}