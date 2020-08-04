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

const ll MAX = 100 + 7;
const ll MOD = 1e9 + 7;

int n,s,ans;
pii p[MAX];

bool cmp(pii p1,pii p2)
{
    return p1.F>p2.F;
}

int main()
{
    cin >> n >> s;

    for(int i=0;i<n;i++)
    {
        cin >> p[i].F >> p[i].S;
    }

    sort(p,p+n,cmp);

    int t = 0;
    for(int f=s;f>0;f--)
    {
        //cout << "#" << f << " " << t << endl;

        for(int j=0;j<n;j++)
        {
            if(p[j].F == f)
            {
                while(p[j].S>t)
                {
                    t++;
                }
            }
        }

        t++;
    }

    cout << t;


	return 0;
}
