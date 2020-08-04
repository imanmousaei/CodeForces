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

const ll MAX = 1e5 + 7;
const ll MOD = 1e9 + 7;

int a[MAX],n;
ll ans;
map<int,int> cnt;

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        cnt[a[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<32;j++)
        {
            ll p = (1<<j);
            ll d = p-a[i];
            if(d==a[i])
            {
                ans+=cnt[d]-1;
                continue;
            }

            if(d>0 && cnt[d]>0)
            {
                //cout << a[i] << " " << p << endl;
                ans += cnt[d];
            }
        }
    }


    cout << ans/2;

	return 0;
}
