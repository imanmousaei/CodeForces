/**
Programmer : Iman Mousaei

dp[i] : a[1] + ... + a[i]

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

ll m,a[MAX],n,dpv[MAX],dpu[MAX];

int main()
{
    cin >> n;
    cin >> a[0];
    dpv[0] = a[0];
    for(int i=1;i<n;i++)
    {
        cin >> a[i];
        dpv[i] = dpv[i-1] + a[i];
    }

    sort(a,a+n);

    dpu[0] = a[0];
    for(int i=1;i<n;i++)
    {
        dpu[i] = dpu[i-1] + a[i];
    }

    cin >> m;

    while(m--)
    {
        ll l,r,t,tmp=0,ans;
        cin >> t >> l >> r ;
        l--;
        r--;
        if(t==1)
        {
            if(l-1>=0)
            {
               tmp =  dpv[l-1];
            }
            ans = dpv[r] - tmp;
        }
        else
        {
            if(l-1>=0)
            {
               tmp =  dpu[l-1];
            }
            ans = dpu[r] - tmp;
        }

        cout <<  ans << endl;

    }


	return 0;
}
