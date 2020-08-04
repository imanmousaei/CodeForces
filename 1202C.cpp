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

int main(){
    fastIO;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int n = s.size();
        int w = 0, s = 0, d = 0, a = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='W'){
                w++;
            }
            else if(s[i]=='A'){
                a++;
            }
            else if(s[i]=='S'){
                s++;
            }
            else if(s[i]=='D'){
                d++;
            }

            int x = max()


        }
    }



    return 0;
}