#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CP(s,x) cout<<s<<" "<<x<<endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e3 + 7;

int n,m,cnt[MAX];

void star(int v){
    for(int i=1;i<=n;i++){
        if(i!=v){
            cout << v << " " << i << endl;
        }
    }

}

int main(){
    fastIO;
    cin >> n >> m;
    for(int i=0;i<m;i++){
        int a,b;
        cin >> a >> b;
        cnt[a]++;
        cnt[b]++;

    }

    for(int i=1;i<=n;i++){
        if(cnt[i]==0){
            cout << n-1 << endl;
            star(i);
            return 0;
        }
    }


    return 0;
}