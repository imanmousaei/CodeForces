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

const ll LLINF = 1e17 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 8e3 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll n,k,cnt[MAX];

int main()
{
    cin >> n >> k;

    for(int i=0;i<n;i++){
        int t;
        cin >> t;
        t--;
        cnt[t]++;
    }

    if(k<=2){
        cout << n << endl;
        return 0;
    }

    sort(cnt,cnt+k,greater<int>());

    for(int i=0;i<k;i++){
        printf("cnt[%d] = %d \n",i,cnt[i]);
    }
    


	return 0;
}