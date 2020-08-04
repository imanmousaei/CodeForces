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

int t;
string s1,s2;

int main(){
    fastIO;
    cin >> t;
    while (t--){
        int fr1,fr2;
        cin >> s1 >> s2;

        for(int i=s2.size()-1;i>=0;i++){
            if(s2[i]=='1'){
                fr2 = i;
                break;
            }
        }

        for(int i=min((int)s1.size()-1,fr2);i>=0;i++){
            if(s1[i]=='1'){
                fr1 = i;
                break;
            }
        }

        cout << "# " << fr1 << " " << fr2 << endl;

        if(s2[fr2]=='1'){
            cout << 0 << endl;
        }
        else{
            cout << fr2 - fr1 << endl;

        }
    }
    



    return 0;
}