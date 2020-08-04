#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define ER(x) cerr<<"# "<<x<<endl;
#define ERR(x) cerr<<"@ "<<x<<endl;
#define ER2(s,x) cerr<<s<<" "<<x<<endl;
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

int n,cnt,mn;
vi cntl[200],cntr[200],remainR,remainL,ansL,ansR;
string l,r;

int main(){
    fastIO;
    
    cin >> n >> l >> r;

    // ERR(cntr[97].size());       
    // ERR(cntr[97].size()-1);       

    fore(i,0,n-1){
        cntl[l[i]].push_back(i+1);
        cntr[r[i]].push_back(i+1);
    }

    fore(i,'a','z'){
        mn = min(cntl[i].size(),cntr[i].size());
        cnt += mn;
        fore(j,0,mn-1){
            ansL.push_back(cntl[i][j]);
            ansR.push_back(cntr[i][j]);
        }

        if(mn==cntl[i].size()){
            for(int j=mn;j<cntr[i].size();j++){
                // ER(i);
                // ER(cntr[i].size() - 1);
                //ER(cntr[i][j]);
                remainR.push_back(cntr[i][j]);
            }
        }

        else{
            for(int j=mn;j<cntl[i].size();j++){
                remainL.push_back(cntl[i][j]);
            }
        }

    }


    while(!cntr['?'].empty() && !remainL.empty()){
        cnt++;
        ansR.push_back(cntr['?'].back());
        cntr['?'].pop_back();
        ansL.push_back(remainL.back());
        remainL.pop_back();
    }
    while(!cntl['?'].empty() && !remainR.empty()){
        cnt++;
        ansL.push_back(cntl['?'].back());
        cntl['?'].pop_back();
        ansR.push_back(remainR.back());
        remainR.pop_back();
    }

    while(!cntl['?'].empty() && !cntr['?'].empty()){
        cnt++;

        ansL.push_back(cntl['?'].back());
        cntl['?'].pop_back();

        ansR.push_back(cntr['?'].back());
        cntr['?'].pop_back();
    }


    cout << cnt << endl;

    for(int i=0;i<ansL.size();i++){
        cout << ansL[i] << " " << ansR[i] << endl;
    }

    




    return 0;
}