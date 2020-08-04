#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define DPT for(int i=0;i<=mx;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CP(s,x) cout<<s<<" "<<x<<endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 1e5 + 7;

int cnt[MAX],dp[MAX],n,q,mx; // dp[i] = ( cnt adade <= i )

int main(){
    fastIO;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        cnt[x]++;
        mx = max(mx,x);
    }

    dp[0] = cnt[0];
    for(int i=1;i<=mx;i++){
        dp[i] = dp[i-1] + cnt[i];
    }

    cin >> q;

    for(int i=0;i<q;i++){
        int m;
        cin >> m;
        if(m>=mx){
            cout << n << endl;
        }
        else{
            cout << dp[m] << endl;
        }
    }

    //DPT;

    return 0;
}