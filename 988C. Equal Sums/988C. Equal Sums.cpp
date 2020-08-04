/**
Programmer : Iman Mousaei

dp[i][j] = sum of the ith sequence without a[i][j] i.e. sum[i] - a[i][j]

Wrong/Time Limit/Bug/Incomplete

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
#define DPT2 for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}
#define error(x) cerr << #x << " = " << (x) <<endl

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 7e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

int k,a[MAX],dp[MAX][MAX];
bool val[MAX];

int main()
{
    cin >> k;
    for(int i=0;i<k;i++)
    {
        int n;
        cin >> n;
        for(int j=0;j<n;j++)
        {
            cin >> a[j];
            sum[i]+=a[j];
        }

        for(int j=0;j<n;j++)
        {
            int t = sum[i]-a[j];
            dp[i][j] = t;
        }

    }

    for(int i=0;i<n;i++)
    {

    }



	return 0;
}
