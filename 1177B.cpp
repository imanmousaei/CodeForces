#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define ER(x) cerr<<#x << " = "<<x<<endl;
#define ER2(x) cerr<<"@ "<<x<<endl;
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

ll k,first,last;

ll binarySearch(ll l,ll r,ll i,ll cnt){  // [l,r]
	ll mid = (l+r)/2;
	ll tmp = ( mid - l + 1 ) * (i+1);

	// ER(l);
	// ER(r);
	// ER(cnt);
	// ER(tmp);
	
	// if(l>=r){
	// 	return l;
	// }


	if(k>cnt && k<=cnt+i+1){
		// ER("#");
		first = cnt+1;
		return l;
	}

	if(k == cnt + tmp){
		last = 1;
		first = k - i;
		return mid;
	}


	if(k > cnt + tmp){
		// ER("?");
		return binarySearch(mid+1,r,i,cnt+tmp);
	}
	else{
		// ER("%")
		return binarySearch(l,mid,i,cnt);
	}



}


int main(){
    fastIO;
    cin >> k;

    ll cnt=0,i;
    for(i=0;;i++){

    	ll tmp = ( pow(10,i+1) - pow(10,i) ) * (i+1);
    	// ER2(tmp);
    	if( ( cnt + tmp ) >=k){
    		break;
    	}
    	cnt += tmp ;
    	// ER(cnt);
    }

    ll l = pow(10,i) , r = pow(10,i+1);

    // ER(l);
    // ER(r);


	ll bs = binarySearch(l,r,i,cnt);

    // ER(first);
    // ER(last);

    // ER(bs);

	string s = to_string(bs);

	cout << s[k-first] << endl;







    return 0;
}