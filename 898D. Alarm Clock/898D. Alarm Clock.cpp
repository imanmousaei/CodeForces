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

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e6 + 7;
const ll MOD = 1e9 + 7;

int n,m,k,cnt,ans;
bool mark[MAX];

int main()
{
    cin >> n >> m >> k;

    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        mark[a] = true;
    }

    for(int i=0;i<MAX;i++)
    {
        if(mark[i])
        {
            cnt++;
        }

        if(i>=m && mark[i-m])
        {
            cnt--;
        }

        if(cnt>=k)
        {
            mark[i] = false;
            ans++;
            cnt--;
        }
    }


    cout << ans;


	return 0;
}
