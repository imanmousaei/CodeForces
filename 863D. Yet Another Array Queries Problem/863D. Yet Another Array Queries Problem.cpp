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

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

int a[MAX],n,q,m,r[MAX],l[MAX],t[MAX];

void print()
{
    cout << "@ ";
    for(int i=1;i<=n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    cin >> n >> q >> m;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    for(int i=1;i<=q;i++)
    {
        cin >> t[i] >> l[i] >> r[i];
    }

    while(m--)
    {
        int b;
        cin >> b;

        for(int i=q;i>=1;i--)
        {
            if(b>=l[i] && b<=r[i])
            {
                if(t[i]==1)
                {
                    b--;
                    if(b==l[i]-1)
                    {
                        b=r[i];
                    }
                }
                else
                {
                    b = l[i]+r[i]-b;
                }
            }


        }

        cout << a[b] << " ";
    }


	return 0;
}
