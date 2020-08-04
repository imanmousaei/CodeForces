#include<bits/stdc++.h>

#define fastIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define CP(s,x) cout<<s<<" "<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define fore(i,l,r) for(int i = l ; i <= r ; i++)

using namespace std;
typedef long long ll;
typedef vector<int> vi;

const ll INF = 1e5;
const ll MOD = 1e9 + 7;
const ll MAX = 2e5 + 7;

ll Min(ll a,ll b){
    if(a>=b){
        return b;
    }
    return a;
}
ll Max(ll a,ll b){
    if(a>=b){
        return a;
    }
    return b;
}

ll q,n,top,down,rightt,leftt;

int main(){
    fastIO;
    cin >> q;
    while(q--){
        top = INF;
        rightt = INF;
        leftt = -INF;
        down = -INF;
        cin >> n;
        fore(i,1,n){
            int x,y;
            bool chap,bala,rast,paein;
            cin >> x >> y >> chap >> bala >> rast >> paein;
            if(n==1){
                cout << "1 " << x << " " << y << endl; 
                break;
            }
            if(!bala){
                top = Min(top,y);
            }
            if(!chap){
                leftt = Max(leftt,x);
            }
            if(!rast){
                rightt = Min(rightt,x);
            }
            if(!paein){
                down = Max(down,y);
            }
        }

        //printf("left = %lld , right = %lld , top = %lld , down = %lld \n",leftt,rightt,top,down);

        if(n==1){
            continue;
        }

        if(leftt<=rightt && top>=down){
            cout << "1 " << leftt << " " << down << endl; 
        }
        else{
            cout << 0 << endl;
        }

        

    }



    return 0;
}