/**
Programmer : Iman Mousaei

dp[i][j] : min of that in range [i,j]
Induction on length = j-i+1

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

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 2e3 + 7;
const ll MOD = 1e9 + 7;

int dp[MAX][MAX],a[MAX],n;

int gcd(int a,int b)
{
    if(a==1 && b==1)
    {
        return 0;
    }

    if(a==1 || b==1)
    {
        return 1;
    }

    if(__gcd(a,b)==1 || a==b)
    {
        return 2;
    }

    return 3;

}

int main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];

    }



    for(int l=1;l<=n;l++) // l = f - s
    {
        for(int s=1;s+l<=n;s++) // f = l + s
        {
            // calculating dp[s][f]
            int f = l + s;
            int m = INF;

            if(s-1>=1 && s+1<f)
            {
                m = min(m,dp[s+1][f]+gcd(a[s],a[s-1]));
            }

            if(s+2<f && s+1<=n)
            {
                m = min(m,dp[s+2][f]+gcd(a[s],a[s+1]));
            }

            if(a[s]==1 && s+1>f)
            {
                m = min(m,dp[s+1][f]);
            }

            if(a[f]==1 && s<f-1)
            {
                m = min(m,dp[s][f-1]);
            }

            if(f+1<=n && s<f-1) ///
            {
                m = min(m,dp[s][f-1]+gcd(a[f],a[f+1]));
            }

            if(f-2>s && f-1>=1)
            {
                m = min(m,dp[s][f-2]+gcd(a[f],a[f-1]));
            }

            if(l==1)
            {
                m = gcd(a[s],a[f]);
            }

            dp[s][f] = m;

            cout << "dp[" << s << "][" << f << "] = " << dp[s][f] << endl;

        }
    }


    cout << dp[1][n];


	return 0;
}
