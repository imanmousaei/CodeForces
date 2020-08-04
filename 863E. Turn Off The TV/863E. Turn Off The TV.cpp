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


struct TV
{
    int l,r,idx;

};

int n,ans=-1;
TV tv[MAX];

bool cmp(TV a,TV b)
{
    if(a.l==b.l)
    {
        return a.r>b.r;
    }
    return a.l<b.l;
}

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int l,r;
        cin >> l >> r;
        tv[i].l = l;
        tv[i].r = r;
        tv[i].idx = i+1;
    }


    sort(tv,tv+n,cmp);

    //cout << tv[2].l << " " << tv[2].r << ' ' << tv[2].idx << endl;

    for (int i = 1; i < n-1; i++)
    {
		if (tv[i].r <= tv[i-1].r || tv[i-1].r >= tv[i+1].l-1)
        {
            ans = tv[i].idx;
            //cout << "# " << i << " : " << ans << endl;
		}
	}

	if (n >=2 && tv[n-1].r <= tv[n-2].r)
	{
	     ans = tv[n-1].idx;
	     //cout << "! " << ans << endl;
    }


    cout << ans;


	return 0;
}
