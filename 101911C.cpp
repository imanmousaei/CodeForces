#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DT for(int i=0;i<=n;i++){cout << "d[" << i << "] = " << d[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pii;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;



int main(){
    fastIO;
    int n,d[MAX],sum=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>d[i];
    }

    sort(d,d+n);

    //DT;

    for(int i=0;i<=n-2;i++){
        int h = d[i+1]/d[i];
        if((d[i+1]%d[i])!=0){
            //cout << "%  " << i << endl;
            cout<<-1<<endl;
            return 0;
        }

        // if( __builtin_popcount(h)!=1){
        //     cout << "# " << h << " " << __builtin_popcount(h) << endl;
        //     cout<<-1<<endl;
        //     return 0;
        // }

        else {
            d[i]=d[i+1]/d[i];
            //cout << d[i] << " ";
        }
    }

    // DT;


    for(int i=0;i<=n-2;i++){
        d[i]=log2(d[i]);
        //cout << d[i] << " ";
    }
    // DT;

    for(int i=0;i<=n-2;i++){
        sum+=d[i];
        d[i+1]--;
    }

    DT;

    cout<<sum<<endl;
    
    return 0;
}