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

ll val(string s){

    ll a = (s[0]-'0') + (s[1]-'0') + (s[2]-'0');
    ll b = (s[3]-'0') + (s[4]-'0') + (s[5]-'0');

    return abs(a-b);
}

ll n,cnt;

int main(){
    fastIO;
    cin >> n;
    
    while(n--){
        string s;
        cin >> s;
        int v = val(s);
        cnt = 0;
        stringstream ge(s);
        int strv = 0 ;
        ge >> strv;

        // cout << "% " << strv << endl;

        fore(i,0,strv-1){
            string t = to_string(i);
            while(t.size()<6){
                t = "0"+t;
            }

            if(val(t)<v){
                cnt++;
            }
        }

        cout << cnt << endl;
    }



    return 0;
}