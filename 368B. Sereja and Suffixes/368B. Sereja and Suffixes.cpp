/**
Programmer : Iman Mousaei

dp[i] : distinct numbers from a[i] to a[n]

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
#define error(x) cerr << "# " << #x << " = " << (x) << endl
#define error(x,y) cerr << "# " << (x) << " " << (y) << endl

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

set<int> s;
int n,m,dp[MAX],cnt[MAX],a[MAX];

int main()
{
    cin >> n >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        s.insert(a[i]);
        cnt[a[i]]++;
    }

    dp[1] = s.size();

    for(int i=2;i<=n;i++)
    {
        cnt[a[i-1]]--;
        if(cnt[a[i-1]]>0)
        {
            dp[i] = dp[i-1];
        }
        else
        {
            dp[i] = dp[i-1] - 1;
        }
    }

    while(m--)
    {
        int l;
        cin >> l;
        cout << dp[l] << endl;
    }



	return 0;
}
