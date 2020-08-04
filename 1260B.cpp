#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
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

int t;

int main(){
    fastIO;
    cin >> t;
    while(t--){
        ll a,b,sum,d,x,y; // a-2x-y=0 , b-2y-x=0
        cin >> a >> b;
        sum = a+b;
        if(sum%3!=0){
            cout << "NO" << endl;
        }
        else{
            sum/=3; // = x+y
            d = a-b; // = x-y

            x = (d+sum) / 2;
            y = (sum-d) / 2;


            //cout << x << " " << y << endl; 

            if(x>=0 && y>=0 && a-2*x-y==0 && b-2*y-x==0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }



    return 0;
}