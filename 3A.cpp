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
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

string s,t;
vector<string> mv;

int main()
{
    cin >> s >> t;
    
    while(t[0]-s[0]>=1 && t[1]-s[1]>=1){
        mv.pb("RU");
        s[0]++;
        s[1]++;
    }
    while(s[0]-t[0]>=1 && s[1]-t[1]>=1){
        mv.pb("LD");
        s[0]--;
        s[1]--;
    }
    while(s[0]-t[0]>=1 && t[1]-s[1]>=1){
        mv.pb("LU");
        s[0]--;
        s[1]++;
    }
    while(t[0]-s[0]>=1 && s[1]-t[1]>=1){
        mv.pb("RD");
        s[0]++;
        s[1]--;
    }

    while(t[0]-s[0]>=1){
        mv.pb("R");
        s[0]--;
    }
    while(s[0]-t[0]>=1){
        mv.pb("L");
        s[0]--;
    }
    while(t[1]-s[1]>=1){
        mv.pb("U");
        s[0]--;
    }
    while(s[1]-t[1]>=1){
        mv.pb("D");
        s[0]--;
    }


    cout << mv.size() << endl;
    for(auto m:mv){
        cout << m << endl;
    }



	return 0;
}