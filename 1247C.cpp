/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

// g++ -g -O2 -std=gnu++17 -static $file

#include <bits/stdc++.h>

#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first
// memset (arr,0,sizeof(num));

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

int decimaltobinary(int a){
    //string ans="";
    int cnt = 0;
    while(a>0){
        int d = a%2;
        a/=2;
        cnt += d;
    }
    //reverse(ans.begin(),ans.end());

    return cnt;
}


int main()
{
    ll n,p;
    cin >> n >> p;

    for(ll i=0;n>=i*p && i<=10;i++){
        ll k = n - i*p;
        ll d2b = decimaltobinary(k);
        printf("k = %lld , i = %lld , d2b = %lld\n",k,i,d2b);
        if(d2b==i){
            cout << i << endl ;
            return 0;
        }
    }
    



	return 0;
}