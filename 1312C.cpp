#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
#define pb push_back
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(ll i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 30 + 7;
const ll maxm = 2e5 + 7;

ll t,n,k,a[maxn],mx;
vi mabnak[maxn];

vi decimaltok(ll num){
    vi ans;
    while(num>0){
        ll d = num%k;
        num/=k;
        ans.pb(d);
    }
    //reverse(ans.begin(),ans.end());
    mx = max(mx,(ll)ans.size());

    return ans;
}

bool XOR(){
    fore(i,0,mx){
        ll cnt = 0;
        fore(j,0,n-1){
            if(mabnak[j].size()>i){
                cnt += mabnak[j][i] ;
            }
            if(cnt>1){
                return false;
            }
        }
    }
    return true;
}

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> n >> k;
    	// ERR(n,k);
        fore(i,0,n-1){
            cin >> a[i];
            // ER(a[i]);
            mabnak[i] = decimaltok(a[i]);
            // ER(mabnak[i]);
        }

        if(XOR()){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
         }
        


    }



    return 0;
}