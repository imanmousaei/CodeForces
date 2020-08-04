/**
Programmer : Iman Mousaei

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
#define CN for(int i=1;i<=n;i++){cout << "can[" << i << "] = " << can[i] << endl;}
#define DPT2 for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define er(x) cerr << "# " << #x << " = " << (x) << endl
#define err(x,y) cerr << "# " << (x) << " " << (y) << endl

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e2 + 7;
const ll MOD = 1e9 + 7;

int n,d,dp[MAX];
string s;
bool can[MAX],flag=false;

int main()
{
    CLR(dp,MAX);

    cin >> n >> d >> s;

    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            can[i+1] = true;
        }
    }

    //CN;

    for(int i=n-1;i>=1;i--)
    {
        if(n-i<=d && can[i])
        {
            flag = true;
            dp[i] = 1;
        }
    }

    if(!flag)
    {
        cout << -1 << endl;
        //DPT;
        return 0;
    }


    for(int i=n-1;i>=1;i--)
    {
        for(int j=i-1;j>=1;j--)
        {
            if(i-j<=d && can[j] && can[i])
            {
                dp[j] = min(dp[j],dp[i]+1);
            }

        }

    }

    if(dp[1]>=n)
    {
        cout << -1 << endl;
        //DPT;
        return 0;
    }

    cout << dp[1] << endl;

    //DPT;


	return 0;
}
