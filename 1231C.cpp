#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define AT for(int i=1;i<=n;i++){for(int j=1;j<=m;j++){cout << "a[" << i << "][" << j << "] = " << a[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e9;
const ll MOD = 1e9 + 7;
const ll MAX = 500 + 7;

int a[MAX][MAX],n,m;
bool zr[MAX][MAX];
ll sum;

int main(){
    fastIO;
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            if(a[i][j]==0){
                zr[i][j] = 1;
            }
        }
    }

    for(int i=2;i<=n;i++){
        for(int j=m-1;j>=1;j--){ // a[i][j] < a[i][j+1]
            if(a[i][j] >= a[i][j+1] && zr[i][j] ){
                a[i][j] = a[i][j+1] - 1;
                printf("@ a[%d][%d] = %d \n",i,j,a[i][j]);
            }
        }
    }

    for(int j=2;j<=m;j++){
        for(int i=n-1;i>=1;i--){ // a[i][j] < a[i+1][j]
            if(a[i][j] >= a[i+1][j] && zr[i][j] ){
                a[i][j] = a[i+1][j] - 1;
                printf("# a[%d][%d] = %d \n",i,j,a[i][j]);
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=m-1;j>=1;j--){ // a[i][j] < a[i][j+1]
            if(a[i][j] >= a[i][j+1] && zr[i][j] ){
                //a[i][j] = a[i][j+1] - 1;
                //printf("# a[%d][%d] = %d \n",i,j,a[i][j]);
                cout << -1 << endl;
                return 0;
            }
        }
    }

    for(int j=1;j<=m;j++){
        for(int i=n-1;i>=1;i--){ // a[i][j] < a[i+1][j]
            if(a[i][j] >= a[i+1][j] && zr[i][j]){
                //a[i][j] = a[i+1][j] - 1;
                //AT;
                //printf("@ a[%d][%d] = %d \n",i,j,a[i][j]);
                cout << -1 << endl;
                return 0;
            }
        }
    }


    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            sum += a[i][j];
        }
    }

    //AT;

    cout << sum << endl;


    return 0;
}