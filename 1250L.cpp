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
const ll maxn = 1e3 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

ll Max(ll x,ll y,ll z){
    ll mx = max(x,y);
    mx = max(mx,z);
    return mx;
}

ll Min(ll x,ll y,ll z){
    ll mn = min(x,y);
    mn = min(mn,z);
    return mn;
}

int main()
{
    ll t,a,b,c;
    cin >> t;
    while(t--){

        cin >> a >> b >> c;
        ll ans = max(a,b);
        ans = max(ans,c);

        if(a<c){
            swap(a,c);
        }

        //cout << "hrerere\n";
        for(ll i=0;i<=b;i++){
            for(ll j=0;i+j<=b;j++){
                ans = min(ans , Max(a+i,b-i-j,c+j)  );
                //printf("ans = %d , i = %d , j = %d \n",ans,i,j);
            }
        }

    
    
        //ll bc = ceil((b+c)/2.0) , ab = ceil((b+a)/2.0);
        //printf("bc = %d , ab = %d \n",bc,ab);
        //ans = Min (ans , max(a,bc) , max(c, ab) );

        /*
        for(ll i=0;i<=a;i++){
            for(ll j=0;i+j<=a;j++){
                ans = min(ans , Max(a-i-j,b+i,c+j) );
            }
        }
        */
        
        for(ll i=0;i<=a;i++){
            for(ll j=0;j<=b;j++){
                ans = min(ans , Max(a-i,b+i-j,c+j) );
            }
        }

        

        

        cout << ans << endl;


    }



	return 0;
}