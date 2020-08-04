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
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

ll t,n,k,sum,b1,b2;

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> n >> k;

        b1 = 0;
        b2 = 0;
        sum = 0;

        fore(i,1,n){ // avalin "b" (n-i)omin char e
            if(k>sum && k<=sum+i){
                // ERR(i,sum);
                fore(j,0,i-1){ // dovomin "b" (n-j)omin char e
                    sum++;
                    if(sum==k){
                        b1 = n-i;
                        b2 = n-j;
                        // ERR(b1,b2);
                        break;
                    }
                }
                break;
            }
            sum += i;
        }

        fore(i,1,n){
            if(i==b1 || i==b2){
                cout << 'b';
            }
            else{
                cout << 'a';
            }
        }
    	
        cout << endl;


    }



    return 0;
}