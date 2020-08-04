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
const ll MAX = 4e5 + 7;

int t,n,p[MAX];

int main(){
    fastIO;
    cin >> t;
    while(t--){
        int g,s,b;
        cin >> n;
        fore(i,1,n){
            cin >> p[i];
        }
        if(n<3){
            cout << "0 0 0" << endl;
            continue;
        }

        int r = n/2;
        int tmp = p[r+1];
        while(p[r]==tmp){
            r--;
        }

        g = 1;
        while(p[g+1]==p[1]){
            g++;
        }

        b = g+1;
        while(p[r-b]==p[r-b+1]){
            b++;
        }

        s = r - g - b;

        if(g>=b || g>=s ){
            //cerr << "# " <<  g << " " << s << " " << b << endl;
            cout << "0 0 0" << endl;
            continue;
        }

        cout << g << " " << s << " " << b << endl;

    }



    return 0;
}