#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

ll sumAll,q,n,k,sum;
vi ans;

int main(){
    fastIO;
    cin >> q;

    while(q--){
        cin >> n >> k;
        sumAll = 0;
        sum = 0;
        ans.clear();
        fore(i,1,n){
            ll a;
            cin >> a;
            sumAll += a;
            sum += a;
            if(sum%2==1){
                ans.push_back(i);
                sum = 0;
            }
        }
        if( (sumAll%2)!=(k%2) || k>n || ans.size()<k ){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
            fore(i,0,k-2){
                cout << ans[i] << " ";
            }
            cout << n << endl;

        }
    }



    return 0;
}