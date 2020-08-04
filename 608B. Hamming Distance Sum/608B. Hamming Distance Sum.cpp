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

const ll LLINF = 7e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

int n,m,cnt[2][MAX];
string a,b;
ll sum;

int main()
{
    cin >> a >> b;

    n = a.size();
    m = b.size();

    if(n==1)
    {
        int x = a[0] - '0';
        for(int i=0;i<m;i++)
        {
            int y = b[i] - '0';
            sum += x^y;
        }
        cout << sum;
        return 0;
    }

    cnt[0][0] = (b[0]=='0');
    cnt[1][0] = (b[0]=='1');

    for(int i=1;i<m;i++)
    {
        cnt[0][i] = cnt[0][i-1];
        cnt[1][i] = cnt[1][i-1];

        if(b[i]=='1')
        {
            cnt[1][i]++;
        }
        else
        {
            cnt[0][i]++;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(a[i]=='1')
        {
            int e = m-n+i;
            sum += cnt[0][e] - cnt[0][i-1];
        }

        else
        {
            int e = m-n+i;
            sum += cnt[1][e] - cnt[1][i-1];
        }

    }

    cout << sum;


	return 0;
}
