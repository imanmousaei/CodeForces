#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define pb push_back
#define LOG(x) for(int i=0;i<=n;i++){cout << #x << "[" << i << "] = " << x[i] << endl;}
#define LOG2(x) for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << #x << "[" << i << "][" << j << "] = " << x[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)
#define forn(i,l,r) for(int i = l ; i >= r ; i--)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

const int INF32 = 1e9;
const ll INF64 = 1e16;
const ll MOD = 1e9 + 7;
const ll maxn = 1e9 + 7;
const ll maxm = 2e5 + 7;

ll t,n,m;
vll f;

ll cardsNeeded(ll h){
    // ER(h);
    if(h==1){
        f.pb(2);
        return f[1];
    }
    if(h < f.size()){
        return f[h];
    }
    f.pb(3*h - 1 + cardsNeeded(h-1));
    return f[h];
}


int main(){
    fastIO;
    f.pb(0);
    cardsNeeded(5e4);

    cin >> t;
    while(t--){
        ll cnt = 0;
    	cin >> n ;
        while(n>=2){
            auto it = lower_bound(f.begin(),f.end(),n);
            // ERR(n,*it);
            if(*it <= n){
                cnt++;
                n-=(*it);
            }
            else{
                it--;
                cnt++;
                n-=(*it);
            }
        }
        cout << cnt << endl;
    }



    return 0;
}