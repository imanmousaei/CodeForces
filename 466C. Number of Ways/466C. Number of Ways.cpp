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
#define DPT2 for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 5e5 + 7;
const ll MOD = 1e9 + 7;

ll n,sum[MAX],cnt,SUM,ans;

int main()
{
    cin >> n;

    for(int i=0;i<n;i++)
    {
        ll a;
        cin >> a;
        SUM+=a;
        sum[i]=SUM;

    }

    if(SUM % 3)
    {
        cout << 0;
        return 0;
    }


    ll s = SUM/3;
    for(int i=0;i<n-1;i++)
    {
        if(sum[i]==2*s)
        {
            ans+=cnt;
        }
        if(sum[i]==s)
        {
            cnt++;
        }
    }


    cout << ans;


    return 0;
}
