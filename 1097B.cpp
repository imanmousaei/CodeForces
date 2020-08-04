// g++ -g -O2 -std=gnu++17 -static $file

#include <bits/stdc++.h>

#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector< vector<int> > vvi;
typedef vector< pii > vpii;
typedef vector<ll> vll;

const ll LLINF = 1e15 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 4e4 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

bool dp[20][MAX];
int n,a[20];

bool BT(int i,int sum,ll bitmask){

    if(i==n){
        return !sum;
    }

    bool f = 0;

    f |= BT(i+1,sum-a[i],bitmask);

    ll bitmask += (1LL<<)

}

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    if(BT(1,a[0],1) || BT(1,-a[0],0)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }



	return 0;
}