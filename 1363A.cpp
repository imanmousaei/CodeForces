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

int t,n,x,odd,even;

int main(){
    fastIO;
    cin >> t;
    while(t--){
    	cin >> n >> x;
    	odd = 0;
    	even = 0;

    	fore(i,1,n){
    		int a;
    		cin >> a;
    		if(a%2==0){
    			even++;
    		}
    		else{
    			odd++;
    		}
    	}

    	if(odd>=1){
	    	x--;
	    	odd--;	
    	}
    	else{
    		cout << "No" << endl;
    		continue;
    	}
    	
    	while(x>0){
    		if(x>=2 && odd>=2){
    			x-=2;
    			odd-=2;
    		}
    		else if(x>=1 && even>=1) {
    			x--;
    			even--;
    		}
    		else{
    			break;
    		}
    	}

    	if(x==0){
			cout << "Yes" << endl;
    	}
    	else{
    		cout << "No" << endl;
    	}

    	// ERR(even,odd);

   //  	if(odd<=0){
   //  		cout << "No" << endl;
   //  		continue;
   //  	}


   //  	if(odd%2==1){
   //  		x = x - odd;
   //  	}
   //  	else{
   //  		x = x - (odd-1);
   //  	}


   //  	if(x<=even){
			// cout << "Yes" << endl;
   //  	}
   //  	else{
   //  		cout << "No" << endl;
   //  	}


    }



    return 0;
}