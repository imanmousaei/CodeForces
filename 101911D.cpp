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

set<int> divs[MAX];
int num[MAX];

void find_div(){
    fore(k,1,2e5){
        int sq = ceil(sqrt(k));
        fore(i,1,sq){
            if(i*i==k){
                divs[k].insert(i);
            }
            else if(k%i==0){
                divs[k].insert(i);
                divs[k].insert(k/i);
            }
        }
        // divs[k].push_back(k);
    }
}


map<int , int>rep;

int main(){
    fastIO;
    int n;
    cin>>n;
    for(int i = 0 ;i < n ; i++ ){
        cin>>num[i];
        rep[num[i]]++;
    }
    find_div();
    //cout << "$" << endl;
    for(int i = 0 ;i < n ; i++ ){
        if(rep[num[i]]>divs[num[i]].size()){
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    

    for(int i = 0 ;i < n ; i++ ){
        auto it = divs[num[i]].begin();
        int folan = *it;
        cout<<num[i]<<" "<<num[i]/folan<<endl;
        
        divs[num[i]].erase(it);
       
    }

    return 0;
}