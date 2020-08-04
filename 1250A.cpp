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

const ll MAX = 1e5 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int pos[MAX],mn[MAX],mx[MAX],n,m,ls[MAX];

int main()
{
    cin >> n >> m;

    for(int i=0;i<=n;i++){
        pos[i] = i;
        mn[i] = i;
        mx[i] = i;
        ls[i] = i;
    }

    for(int i=1;i<=m;i++){
        int a;
        cin >> a;
        if(pos[a]==1){
            continue;
        }
        else{
            int b = ls[pos[a]-1] ;
            pos[b]++;
            mn[b] = min(mn[b],pos[b]);
            mx[b] = max(mx[b],pos[b]);

            swap(ls[pos[a]-1],ls[pos[a]]);

            pos[a]--;
            mn[a] = min(mn[a],pos[a]);
            mx[a] = max(mx[a],pos[a]);
        }
    }

    for(int i=1;i<=n;i++){
        cout << mn[i] << " " << mx[i] << endl;
    }


	return 0;
}