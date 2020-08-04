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
const ll MAX = 1e5 + 7;

int t,n,cnt[MAX],q[MAX];
bool used[MAX];

int main(){
    fastIO;
    cin >> t;
    while(t--){
        memset(cnt,0,sizeof(cnt));
        memset(q,0,sizeof(q));
        memset(used,0,sizeof(used));

        vi v;
        bool go = 0;
        int mn = 1;

        cin >> n;

        fore(i,1,n){
            cin >> q[i];
            cnt[q[i]]++;

            if(go){
                continue;
            }

            if(cnt[q[i]]>q[i]){
                cout << -1 ;
                go = 1;
                continue;
            }
        }

        if(!go){
            fore(i,1,n){
                if(q[i]>q[i-1]){
                    v.push_back(q[i]);
                    used[q[i]] = 1;

                    if(mn==q[i]){
                        mn++;
                    }

                }
                else{
                    while(used[mn]){
                        mn++;
                    }
                    used[mn] = 1;
                    if(mn>q[i]){
                        cout << -1;
                        go = 1;
                        break;
                    }
                    v.push_back(mn);
                    mn++;
                }

            }
        }

        if(!go){
            for(int a:v){
                cout << a << " ";
            }
        }
        
        cout << endl;


    }



    return 0;
}