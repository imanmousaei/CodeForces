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

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

int t,n,a[maxn],maxl[maxn],maxr[maxn],tekrariL,tekrariR;
bool isTaken[maxn];
set<pii> s;

bool isPermutaion(int l,int r){
    int sz = r - l + 1;
    if(l==1){
        if(maxl[r]==sz){
            return true;
        }
        return false;
    }
    if(r==n){
        if(maxr[l]==sz){
            return true;
        }
        return false;
    }
    return false;
}



int main(){
    fastIO;
    cin >> t;    
    while(t--){
        s.clear();

        fill(isTaken, isTaken + n+1, 0); 
        fill(a, a + n+1, 0); 
        fill(maxl, maxl + n+1, 0); 
        fill(maxr, maxr + n+1, 0); 

        tekrariL = INF;
        tekrariR = -INF;

    	cin >> n;

        fore(i,1,n){
            cin >> a[i];
            if(isTaken[a[i]]){
                tekrariL = min(tekrariL,i);
            }
            maxl[i] = max(maxl[i-1],a[i]);
            isTaken[a[i]] = 1;
        }

        fill(isTaken, isTaken + n+1, 0); 

        forn(i,n,1){
            if(isTaken[a[i]]){
                tekrariR = max(tekrariR,i);
            }
            maxr[i] = max(maxr[i+1],a[i]);
            isTaken[a[i]] = 1;
        }

        // <fuck em all>
        fill(maxl + tekrariL, maxl + n + 1, -1); 
        fill(maxr , maxr + tekrariR + 1, -1); 
        // </fucked em all>


        fill(isTaken, isTaken + n+1, 0); 

        fore(i,1,n){
            if(isTaken[a[i]]){
                if(isPermutaion(1,i-1) && isPermutaion(i,n)){
                    s.insert({i-1,n-i+1});
                    // ER(n-i);
                    break;
                }
                else{
                    break;
                }
            }

            if(isPermutaion(1,i-1) && isPermutaion(i,n)){
                s.insert({i-1,n-i+1});
                // ER(i);
            }

            isTaken[a[i]] = 1;
        }


        int sz = s.size();
        cout << sz << endl;

        for(auto it = s.begin();it != s.end();it++){
            cout << it -> F << " " << it -> S << endl;
        }


    	

    }



    return 0;
}