    #include<bits/stdc++.h>

    #define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    #define CP(s,x) cout<<s<<" "<<x<<endl;
    #define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
    #define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
    #define fore(i,l,r) for(int i = l ; i <= r ; i++)
    using namespace std;
    typedef long long ll;
    typedef vector<int> vi;

    const ll INF = 1e9;
    const ll MOD = 1e9 + 7;
    const ll MAX = 2e5 + 7;
    int n;

    set<int> cnt[MAX];
    vector<int> v;
    bool visited[MAX];
    int main(){
        int t;
        cin>>t;
        while(t--){
            cin>>n;
            v.clear();
            fore(i,1,n){
                int x;
                cin>>x;
                visited[x]= false;
                cnt[x].clear();
                v.push_back(x);
            }
            bool flag = false;
            fore(i,0,n-1){
                cnt[v[i]].insert(i);
                if (cnt[v[i]].size() > 1)
                    flag = true;
            }
            if (!flag){
                cout<<-1<<endl;
                continue;
            }
            int res = 1e9;
            fore(i,0,n-1){
                auto x = v[i];
                if (cnt[x].size() == 1)
                    continue;
                if(visited[x])
                    continue;
                visited[x] = true;
                for(auto it = cnt[x].begin() ; it!=cnt[x].end();it++){
                    int xx = *it;
                    auto it1 = it;
                    it1++;
                    if (it1 == cnt[x].end())
                        continue;
                    auto yy = *it1;
                    res = min (res , yy - xx +1);
                }
            }
            cout<<res<<endl;
            
        }


        return 0;
    }