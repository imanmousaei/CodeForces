/**
Programmer : Iman Mousaei

dp[i] : max not destroyed in range [0,i]

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

const ll MAX = 1e6 + 7;
const ll MOD = 1e9 + 7;

ll dp[MAX],n,mx,mxxx;
pii a[MAX];

int binarySearch(int val,int l=0,int r=n) // range [l,r]
{
    if(r-l<0)
    {
        return -1;
    }

    int mid = (l+r)/2;

    if(a[mid].F==val)
    {
        return mid;
    }

    if(val > a[mid].F)
    {
        return binarySearch(val,mid+1,r);
    }

    return binarySearch(val,l,mid-1);

}

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i].F >> a[i].S;
        if(mxxx<a[i].F)
        {
            mxxx = a[i].F;
        }
    }

    sort(a,a+n);


    if(binarySearch(0)==-1)
    {
        dp[0] = 0;
    }
    else
    {
        dp[0] = 1;
    }

    mx = dp[0];

    for(int i=1;i<=mxxx;i++)
    {
        int bs = binarySearch(i);
        if(bs==-1)
        {
            dp[i] = dp[i-1];
        }
        else if(i-(a[bs].S+1)<0)
        {
            dp[i] = 1;
        }
        else
        {
            dp[i] = dp[i-(a[bs].S+1)] + 1;
        }

        if(mx<dp[i])
        {
            mx = dp[i];
        }
    }

    cout << n-mx;


	return 0;
}
