#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define DPT for(ll i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(ll i=0;i<=n;i++){for(ll j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(ll i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef pair<ll,ll> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

ll t;

ll GCD(ll a, ll b) { return b == 0 ? a : GCD(b, a % b); }

ll main(){
    fastIO;
    cin >> t;
    while(t--){
        ll r,b,k,mn,mx,gcd,lcm;
        bool rbl = 0;
        cin >> r >> b >> k;
        mx = max(r,b);
        mn = min(r,b);

        gcd = GCD(r,b);
        lcm = r*b / gcd;

        for(ll i=b;i<=lcm;i+=b){
            ll fst = i-b;
            if(fst>0){
                fst--;
            }
            if((i-1)/r - fst/r >=k){
                cout << "REBEL" << endl;
                rbl = 1;
                break;
            }
        }
        if(!rbl){
            cout << "OBEY" << endl;
        }

    }



    return 0;
}