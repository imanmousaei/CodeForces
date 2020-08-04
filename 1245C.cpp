/**

**/

// g++ -g -O2 -std=gnu++17 -static $file

#include <bits/stdc++.h>

#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first
#define CP(x) cout<<"CP"<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector< vector<int> > vvi;
typedef vector< pii > vpii;
typedef vector<ll> vll;

const int MAX = 2e5 + 7;
const int MOD = 1e9 + 7;

int n,dp[MAX],cntu,cntn,cntm,cntw,ans = 1;
string s;

int count(int t){
    if(t<=0){
        return 0;
    }

    if(dp[t]>0){
        return dp[t]%MOD;
    }

    //CP(t);

    for(int i=1;i<=t-2;i++){ // [i,i+1]
        dp[t] = count(i-1)%MOD + count(t-i-1)%MOD; // if we swap
        dp[t]%=MOD;
        dp[t] += count(i)%MOD + count(t-i)%MOD; // else
        dp[t]%=MOD;
    }

    dp[t]%=MOD;

    return dp[t];

}

int main()
{
    cin >> s;
    n = s.size();
    s = "."+s;

    dp[1]=1;
    dp[2]=2;
    dp[3]=3;

    //cout << s << endl;

    for(int i=1;i<=n;i++){
        while(s[i]=='m' || s[i]=='w'){
            cout << 0 << endl;
            return 0;
        }
    }

    for(int i=1;i<=n;i++){
        if(s[i]!='u'){
            continue;
        }

        cntu=0;
        while(s[i]=='u'){
            cntu++;
            i++;
        }

        if(cntu>=2){
            ans = (ans*count(cntu))%MOD;
        }
        
    
    }

    for(int i=1;i<=n;i++){
        if(s[i]!='n'){
            continue;
        }

        cntn=0;
        while(s[i]=='n'){
            cntn++;
            i++;
        }

        if(cntn>=2){
            //printf("cntn = %d \n",cntn);
            ans = (ans*count(cntn))%MOD;
        }
        
    
    }


    cout << ans%MOD << endl;



	return 0;
}