/**
Programmer : Iman Mousaei

dp[i][j] : min cost if we pick j display(s) from the first i

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout<<"CP"<<x<<endl;
#define S second
#define F first
#define DPT for(int i=1;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=1;i<=n;i++){for(int j=1;j<=3;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 3e3 + 7;
const ll MOD = 1e9 + 7;

int n,s[MAX],c[MAX];
ll dp[MAX][5],mn=LLINF;
bool flag = true;

int main()
{
    cin >> n;

    //memset(dp,LLINF,sizeof dp);

    for(int i=1;i<=n;i++)
    {
        cin >> s[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin >> c[i];
        dp[i][1] = c[i];
        dp[i][2] = LLINF;
        dp[i][3] = LLINF;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(s[i]>s[j])
            {
                dp[i][2] = min(dp[i][2],dp[j][1]+c[i]);
                if(i>=3)
                {
                    dp[i][3] = min(dp[i][3],dp[j][2]+c[i]);
                    if(dp[i][3]<mn)
                    {
                        mn = dp[i][3];
                        flag = false;
                        //cout << "#" << i << endl;
                    }
                }
            }
        }
    }

    //DPT2;

    if(flag)
    {
        cout << -1;
        return 0;
    }

    cout << mn;


	return 0;
}
