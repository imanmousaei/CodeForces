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
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 4000 + 7;
const ll MOD = 1e9 + 7;

ll dp[MAX],n,a[3];

int main()
{
    cin >> n >> a[0] >> a[1] >> a[2];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i+a[j]>n || (dp[i]==0 && i!=0) )
            {
                continue;
            }

            dp[i+a[j]] = max(dp[i]+1,dp[i+a[j]]) ;
        }
    }


    //DPT;

    cout << dp[n];


	return 0;
}
