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

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int t,n,a,b,c,win;
char ans[MAX];
string s;

int main()
{
    cin >> t;
    while(t--){
        win = 0;
        CLR(ans,'.');
        cin >> n >> a >> b >> c >> s ;

        for(int i=0;i<n;i++){
            if(s[i]=='R' && b>=1){
                ans[i] = 'P';
                b--;
                win++;
            }
            if(s[i]=='P' && c>=1){
                ans[i] = 'S';
                c--;
                win++;
            }
            if(s[i]=='S' && a>=1){
                ans[i] = 'R';
                a--;
                win++;
            }
        }

        if(win>=ceil(n/2.0)){
            cout << "YES" << endl ;

            for(int i=0;i<n;i++){
                if(ans[i] == '.'){
                    if(a>=1){
                        cout << 'R' ;
                        a--;
                    }
                    else if(b>=1){
                        cout << 'P';
                        b--;
                    }
                    else if(c>=1){
                        cout << 'S';
                        c--;
                    }
                }
                else{
                    cout << ans[i];
                }
            }
            
            
            cout << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }



	return 0;
}