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

int decimalto2(int a){
    int cnt=0;
    while(a>0){
        int d = a%2;
        a/=2;
        cnt+=d;
    }
    return cnt;
}

int main(){
    fastIO;
    int n;
    cin >> n;
    
    cout << decimalto2(n) << endl;



    return 0;
}