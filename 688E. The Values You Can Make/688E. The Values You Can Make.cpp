/**
Programmer : Iman Mousaei

dp[i][j][k] = true : coins 1 to i, sum = j , exists subset with sum = k

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

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 500 + 7;
const ll MOD = 1e9 + 7;

bool dp[MAX][MAX][MAX];
int n,t,c[MAX];
set<int> s;

int main()
{
    cin >> n >> t;
    for(int i=1;i<=n;i++)
    {
        cin >> c[i];
    }
    s.insert(0);

    dp[0][0][0] = 1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=t;j++)
        {
            for(int k=0;k<=t;k++)
            {
                dp[i][j][k] = dp[i-1][j][k];

                if(j-c[i]>=0)
                {
                    dp[i][j][k] |= dp[i-1][j-c[i]][k];
                    if(k-c[i]>=0)
                    {
                        dp[i][j][k] |= dp[i-1][j-c[i]][k-c[i]];
                    }

                }
            }
        }
    }

    for(int i=0;i<=t;i++)
    {
        if(dp[n][t][i])
        {
            s.insert(i);
        }
    }

    cout << s.size() << endl;

    for(auto p:s)
    {
        cout << p << " ";
    }


	return 0;
}
