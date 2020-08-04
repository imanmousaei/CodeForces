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
#define DT for(int i=0;i<n;i++){cout << "d[" << i << "] = " << d[i] << endl;}
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


int n,d[MAX],mx,cnt[MAX];


int main()
{
    cin>>n;
    d[0]=0;
    for(int i=1;i<n;i++){
        cin>>d[i];
    }

    for(int i=0;i<n-1;i++){
        d[i+1]+=d[i];

    }
    for(int i=0;i<n;i++){
        if(d[i]>mx){
            mx=d[i];
        }
    }

    int t = n-mx;

    for(int i=0;i<n;i++){
        d[i]+=t;
        //printf(" %d ",d[i]);
        if(d[i]<1 || d[i]>n){
            cout << -1 << endl;
            return 0;
        }
        cnt[d[i]]++;
    }

    //DT;

    for(int i=0;i<n;i++){
        if(cnt[d[i]]!=1){
            cout << -1 << endl;
            return 0;
        }
    }

    for(int i=0;i<n;i++){
        cout << d[i] << " ";
    }


	return 0;
}