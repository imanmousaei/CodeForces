/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define VAL(x) #x << " = " << (x) << "   "
#define SQR(a) ((a) * (a))
#define SZ(x) ((int) (x).size())
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define FOREACH(i, x) for(__typeof((x).begin()) i = (x).begin(); i != (x).end(); i ++)
#define FOR(i, n) for (int i = 0; i < (n); i ++)
#define EPS (1e-8)
#define arrsize(a) sizeof(a)/sizeof(a[0])

#define DEBUG true
#if DEBUG
#define print(a) for(int i=0;i<arrsize(a);i++) { cout << a[i] << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#endif // DEBUG
typedef long long ll;

using namespace std;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int maxbit = 19;
const int maxm = 100 + 7;
const ll maxmask = (1<<19) + 7;

string n;
ll m,sz,fullmask;
ll dp[maxmask][maxm],a[maxbit];

ll fact(ll k)
{
    ll t = 1;
    for (int i = 1; i <= k; i++)
        t *= i;
    return t;
}

ll Count(ll k)
{
    int t = 0;
    for (int i = 0; i < sz; i++)
        if (a[i] == k)
            t++;
    return t;
}

int main()
{
    cin >> n >> m;

    sz = n.size();

    for(int i=sz;i>=0;i--)
    {
        a[i] = n[i]-'0';
    }

    sort(a,a+sz);

    fullmask = (1<<sz)-1;
    //printsz(a,sz);

    for(int k=0;k<sz;k++)
    {
        for(int p = 0 ; p < m ; p++)
        {
            if(a[k]%m==p && a[k]!=0)
            {
                dp[1<<k][p] = 1;
                //cout<<"# "<<(1<<k)<<endl;
            }
        }

    }

    for(ll mask = 1; mask<=fullmask; mask++ )
    {
        for(int i=0;i<sz;i++)
        {
            ll p = mask | (1<<i);
            for(int k=0;k<m;k++)
            {
                if(p!= mask)
                {
                    dp[p][ (k*10+a[i])%m ] += dp[mask][k];
                    //cout<<"@@@ p is : "<<p<<" k is : "<<(k*10+a[i])%m<<" "<<dp[p][(k*10+a[i])%m]<<endl;
                }

            }
        }
    }
    /*
    for(int i = 0 ; i < fullmask ; i++)
    {
        for(int j = 0 ; j < m ; j++){
            cout<<"mask is : "<<i<<" m is "<<j<<" " <<dp[i][j]<<endl;
        }
    }
    */

    ll ans = dp[fullmask][0];
    for(int i=0;i<10;i++)
    {
        ans /= fact(count(a,a+sz,i));
    }


    cout << ans;


	return EXIT_SUCCESS;
}
