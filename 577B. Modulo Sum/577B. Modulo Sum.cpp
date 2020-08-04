/**
Programmer : Iman Mousaei

dp[i][mod] : true iff we can choose a subsequence that it's mod by m is mod

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
#define DPT2 for(int i=1;i<=n;i++){for(int j=0;j<m;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e6 + 7;
const ll maxm = 1e3 + 7;
const ll MOD = 1e9 + 7;

int n,m,a[MAX];
bool dp[5][maxm],yes;

int main()
{
    cin >> n >> m;

    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    if(n==1)
    {
        if(a[1]%m)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        return 0;
    }

    for(int j=1;j<n;j++)
    {
        int i = j%2;
        int k = !i;
        for(int mod=0;mod<m;mod++)
        {
            dp[i][a[j]%m] = true;
            if(dp[i][mod])
            {
                dp[k][mod] = true;
                dp[k][(mod+a[j+1])%m] = true;
                dp[k][(a[j+1])%m] = true;
            }
        }
        if(dp[i][0] || dp[!i][0])
        {
            yes = true;
            break;
        }
    }

    //DPT2;

    if(yes)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


	return 0;
}
