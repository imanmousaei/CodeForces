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

int n,q,r[MAX],c[MAX];

bool even_path(int ra,int ca,int rb,int cb){


    if(ra==rb && ca==cb){
        return 1;
    }
    
    if(ra>n || ra<1 || rb>n || ra<1){
        return 0;
    }

    printf("%d , %d , %d , %d\n",ra,ca,rb,cb);

    bool f = 0;

    if(ra+1<=n && (r[ra+1]+c[ca])%2==0 ){
        f |= even_path(ra+1,ca,rb,cb);
    }
    if(ca+1<=n && (r[ra]+c[ca+1])%2==0 ){
        f |= even_path(ra,ca+1,rb,cb);
    }
    if(ra-1>=1 && (r[ra-1]+c[ca])%2==0 ){
        f |= even_path(ra-1,ca,rb,cb);
    }
    if(ca-1>=1 && (r[ra]+c[ca-1])%2==0 ){
        f |= even_path(ra,ca-1,rb,cb);
    }

    return f;

}

        ll rra,rrb,cca,ccb;
int main()
{
    cin >> n >> q;
    for(int i=1;i<=n;i++){
        cin >> r[i];
    }

    for(int i=1;i<=n;i++){
        cin >> c[i];
    }

    
    while(q--){
        cin >> rra >> cca >> rrb >> ccb;
        printf("here\n");
        
        if(even_path(rra,cca,rrb,ccb)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }


    }



	return 0;
}