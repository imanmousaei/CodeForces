/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define For(i,a,b) for (int i=a;i<b;i++)
#define Ford(i,a,b) for (int i=a;i>=b;i--)
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

#define DEBUG false
#if DEBUG
#define print(a) for(auto i:a) { cout << i << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#else
#define print(a)
#define printsz(a,sz)
#endif // DEBUG

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e6 + 7;
const int MOD = 1e9 + 7;

ll a,b,p,x,n[MAX],ans1,ans2;


ll power(ll a1,ll b1)
{
    if (b1==0)
        return 1;

    ll t = power(a1,b1>>1) ;

    t = (1LL * t * t) % p;


    if(b1&1)
        t = (1LL *t*a1) % p;

    return t%p;
}

map<ll,ll> an2n;

int main()
{
    cin >> a >> b >> p >> x;

    ans1 = x/(p*(p-1));
    ans1 *= (p-1);

    //cout << ans1 << "*/" << endl;

    ll B = x % (p*(p-1));

    for(ll i=1;i<p;i++)
    {
        n[i] = (power(i,p-2) * b) % p; // n[a^n]
    }

    for(ll i=1;i<p;i++)
    {
        ll an = pow(a,i);
        an2n[an] = i;
    }

    for(ll i=1;i<p;i++)
    {
        /*
        ll an = power(a,k);
        ll j = n[an];
        ll nn = an2n[an]; // an2n[n[k]]
        */

        ll j = an2n[n[i]];

        ll tmp;

        if(j>=i)
        {
            tmp = (j-i)*(p-1)+j;
        }
        else
        {
            tmp = (j+p-1-i)*(p-1)+j;
        }

        if(tmp<=B)
            ans2++;
    }


    cout << ans1 << endl << ans2 << endl;

    cout << ans1 + ans2;


	return EXIT_SUCCESS;
}
