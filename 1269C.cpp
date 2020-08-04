#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ER(x) cerr<<#x << " = "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;


string x1,x2,x3;
int n, k, m,f=0;

int main(){

    fastIO;
    cin>>n>>k;
    cin>>x1;
    x3=x1;
    x2=x1.substr(0,k);
    
    for(int i=0;i<k;i++){
    	x2[i]=x1[i];

    }
    for(int i=0;i<n;i++){
    	x3[i]=x2[f];
    	f++;
    	if(f==k){
    		f=0;
    	}

    }
    if(x3>=x1){
    	cout<<x3.size()<<endl;
		cout<<x3<<endl;
    }

    else{
    	int h1,h2;
    	h1=x2.size();
    	int t = stoi(x2);

    	t++;
    	x2 = to_string(t);
    	h2=x2.size();

    	if(h2>h1){
    		n=n+1;
    	}

		for(int i=0;i<n;i++){
	    	x3[i]=x2[f];
	    	f++;
	    	if(f==k){
	    		f=0;
	    	}
		}

    	cout<<x3.size()<<endl;
		cout<<x3<<endl;

    }



    return 0;
}
