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

const ll INF = 1e9+7;
const ll MOD = 1e9 + 7;
const ll MAX = 1e3 + 7;

int n,a[MAX],ans;

int main(){
    fastIO;
    cin >> n;
    fore(i,0,n-1){
        cin >> a[i];
    }

    sort(a,a+n);

    // fore(i,0,n-1){
    //     cout << a[i] << " ";
    // }

    fore(i,1,n-1){
        ans += a[i] - a[i-1] -1;
        //cout << ans << endl;
    }

    cout << ans << endl;


    return 0;
}