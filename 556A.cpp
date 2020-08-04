#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CP(s,x) cout<<s<<" "<<x<<endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

int n,cnt[5];
string s;

int main(){
    fastIO;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        cnt[s[i]-'0']++;
    }

    cout << n - min(cnt[0],cnt[1])*2 << endl;




    return 0;
}