#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=0;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll maxn = 2e5 + 7;
const ll maxm = 2e5 + 7;

int a[maxn];
ll p,t,n,k,sum[maxn],cnt;


int main(){
    fastIO;
    cin >> t;
    while(t--){

    	cnt = 0;
    	memset(a,0,sizeof(a));
    	memset(sum,0,sizeof(sum));

    	cin >> n >> p >> k;
    	fore(i,0,n-1){
    		cin >> a[i];
    		sum[i] =a[i];
    		if(i>=1){
    			sum[i] += sum[i-1];
    		} 
    	}
    	sort(a,a+n);

	    int i = 0;
    	while(p>0 && i<n){

            int j = i-1;
	    	int end = min(n-1,i+k-1);
	    	while(sum[i]<=a[end] && p>=sum[i]-sum[j] && i<n){
	    		i++;
	    		end = min(n-1,i+k-1);
	    	}
            if(j>i){
                i--;
            }

            ER(i);
            ER(j);
            ER(p);
            ER(cnt);

	    	cnt += i+1;
	    	p -= sum[i];
            if(j>=0){
                p+=sum[j];
                cnt-=j;
            }
	    	
    	}

    	ER(cnt);


    }



    return 0;
}