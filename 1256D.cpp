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

ll q,n,k,last;
string s;

int main()
{
    cin >> q;
    while(q--){
        cin >> n >> k >> s;
        s = "."+s;
        last = 0;
        int i=1;

        while(s[i]=='0'){
            i++;
            last++;
        }

        
        
        for(;i<=n&&k>=0;i++){
            //printf("k = %lld , k-- = %lld \n",k,(i-last-1));
            if(s[i]=='0'){   
                if(k>=i-last-1){
                    k -= (i-last-1);
                    s[++last]='0';
                    s[i] = '1';
                    //printf("i = %d \n",i);
                }
                else{
                    s[i] = '1';
                    s[i-k] = '0';
                    k=0;
                }
            }

            //cout << s << endl;
        }

        for(int i=1;i<=n;i++){
            cout << s[i];
        }

        cout << endl;

    }



	return 0;
}