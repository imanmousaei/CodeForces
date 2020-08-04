#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CP(s,x) cout<<s<<" "<<x<<endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

int n,len=1;

int main(){
    fastIO;
    cin >> n;

    for(int i=5; ;i*=2){
        //cout << "hi ";

        if(n>=1 && n<=len){
            cout << "Sheldon" << endl;
            return 0;
        }
        else if(n>len && n<=2*len){
            //cout << "# " << n << " " << i+2*len << " " << i << endl;
            cout << "Leonard" << endl;
            return 0;
        }
        else if(n>2*len && n<=3*len){
            cout << "Penny" << endl;
            return 0;
        }
        else if(n>3*len && n<=4*len){
            cout << "Rajesh" << endl;
            return 0;
        }
        else if(n>4*len && n<=5*len){
            cout << "Howard" << endl;
            return 0;
        }
        len*=2;
        n-=i;
    }



    return 0;
}