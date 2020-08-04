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

const ll MAX = 2e5 + 7;
const ll MOD = 5;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll pow(ll a,ll b){
    if(b==1){
        return a;
    }
    if(b==0){
        return 1;
    }
    ll t = pow(a,b/2)%MOD;
    t = (t*t)%MOD;
    if(b%2==1){
        t = (t*a)%MOD;
    }
    return t%MOD;
}

int main()
{
    string s;
    ll ans,n,a;

    cin >> s;
    n = s.size();

    if(n>=2){
        a = s[n-1]-'0' + 10*(s[n-2]-'0');
    }
    else{
        a = s[n-1]-'0';
    }
    
    a %= 4;

    ans = 1 + pow(2,a) + pow(3,a) + pow(4,a) ;
    ans = ans%MOD;

    cout << ans << endl;



	return 0;
}