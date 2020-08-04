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

int n,cnt0,cnt1;
string s;

int main()
{
    cin >> n >> s;

    for(int i=0;i<n;i++){
        if(s[i]=='z'){
            cnt0++;
        }
        else if(s[i]=='n') {
            cnt1++;
        }
    }

    for(int i=0;i<cnt1;i++){
        cout << 1 << " ";
    }

    for(int i=0;i<cnt0;i++){
        cout << 0 << " ";
    }


	return 0;
}