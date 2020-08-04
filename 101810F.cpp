/**

**/

// g++ -g -O2 -std=gnu++17 -static $file

#include <bits/stdc++.h>

#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first
#define CP(x) cout<<"CP"<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CNT for(int i=0;i<=mx;i++){cout << "cnt[" << i << "] = " << cnt[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector< vector<int> > vvi;
typedef vector< pii > vpii;
typedef vector<ll> vll;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 3e6 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll t,n,cnt[MAX],sum,mx;
//bool prime[MAX];

void gharbal_eratosten(ll end){
    //cout << "$ " << end << endl;
    for(ll i=1;i*2<=end;i++){
        if(cnt[i]>=1){
            for(ll j=i*2;j<=end;j+=i){
                //prime[j] = 0;
                if(cnt[j]>=1){
                    sum -= (cnt[j]*(j-i)); 
                    cnt[i]+=cnt[j];
                    cnt[j] = 0;
                    //cout << "# " << j << endl;
                }
            }
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    cin >> t;
    while(t--){
        sum = 0;
        mx = 0;
        CLR(cnt,0);
        //CLR(prime,1);
        cin >> n;
        for(ll i=0;i<n;i++){
            ll a;
            cin >> a;
            cnt[a]++;
            sum += a;
            if(a>mx){
                mx=a;
            }
        }

        //mx = MAX;
        gharbal_eratosten(mx);

        //CNT;

        cout << sum << endl;

    }




	return 0;
}