#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<< #x << " = " << x << endl;
#define ERR(x,y) cerr<<#x << " = "<<x << " , " << #y << " = " << y << endl;
#define ERRR(x,y,z) cerr<<#x << " = "<<x << " , " << #y << " = " << y << " , " << #z << " = " << z << endl;
#define F first
#define S second
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

int n,a[maxn],l,r;

int main(){
    fastIO;
    cin >> n;
    fore(i,1,n){
    	cin >> a[i];
    }

    int i = 1 , mx = a[1] , mn = a[1];
    while(a[i+1]>mn && i<n){
    	mx = max(mx,a[i+1]);
    	mn = min(mn,a[i+1]);
    	i++;
    }
    l = i;

    ER(i);

    while(a[i+1]>mn && a[i+1]<mx && i<n){
    	mx = max(mx,a[i+1]);
    	mn = min(mn,a[i+1]);
    	i++;
    }
    r = i;
    ER(i);
    ER(mx);

    while(a[i+1]>mn && a[i+1]<mx && i<n){
    	mx = max(mx,a[i+1]);
    	mn = min(mn,a[i+1]);
    	i++;
    }

    ER(i);

    if(i==n){
    	cout << "yes" << endl << l << " " << r << endl;
    }
    else{
    	cout << "no" << endl;
    }






    return 0;
}