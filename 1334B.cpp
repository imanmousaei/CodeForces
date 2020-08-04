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
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

ll t,n,x,a[maxn],sumMosbat,sumManfi,cntMosbat;

int main(){
    fastIO;
    cin >> t;
    while(t--){
        sumMosbat = 0;
        sumManfi = 0;
        cntMosbat = 0;

        multiset<ll> manfis;

    	cin >> n >> x;
    	fore(i,1,n){
    		cin >> a[i];
            a[i] -= x;
            if(a[i]>0){
                sumMosbat += a[i];
                cntMosbat++;
            }
            else{
                manfis.insert(-a[i]);
            }
    	}

        if(manfis.size()==0){
            cout << n << endl;
            continue;
        }

        bool f = 1;
        int i = 0;
        for(auto b:manfis){
            i++;
            sumManfi += b;
            f = 0;
            if(sumManfi > sumMosbat){
                // ER(i);
                cout << i-1 + cntMosbat << endl;
                f = 1;
                break;
            }
        }

        if(!f){
            cout << n << endl;
        }

    	

    }



    return 0;
}