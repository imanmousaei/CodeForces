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

int t;

char notSame(char c){
    switch(c){
        case 'a':
            return 'b';
        case 'b':
            return 'c';
        case 'c':
            return 'a';
        default:
            return 'a';
    }
}

char notSame(char c1,char c2){
    bool cnt[200] = {0};

    cnt[c1] = 1;
    cnt[c2] = 1;
    fore(i,'a','c'){
        if(cnt[i]==0){
            return (char)(i);
        }
    }
    return 'a';
}

int main(){
    fastIO;
    //cerr << (int)('?'-'a') << endl;
    cin >> t;
    while(t--){
        bool neg = 0;
        string s;
        cin >> s;
        int n = s.size();

        fore(i,1,n-2){
            if(s[i]=='?'){
                continue;
            }

            if(s[i-1]==s[i] || s[i]==s[i+1]){
                cout << -1 << endl;
                //cerr << s[i-1] << " " << s[i] << " " << s[i+1] << endl;
                neg = 1;
                break;
            }
        }

        if(neg){
            continue;
        }

        if(s[0]=='?'){
            s[0] = notSame(s[1]);
        }
        fore(i,1,n-1){
            if(s[i]=='?'){
                s[i] = notSame(s[i-1],s[i+1]);
            }
        }


        cout << s << endl;

    }



    return 0;
}