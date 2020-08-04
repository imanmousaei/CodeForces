/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define For(i,a,b) for (int i=a;i<b;i++)
#define Ford(i,a,b) for (int i=a;i>=b;i--)
#define iOS ios_base::sync_with_stdio(false);
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

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

ll sum,k,l,m,n,d,C[10],cnt;

int main()
{
    cin >> k >> l >> m >> n >> d;

    for(int i=1;i<=d;i++)
    {
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0)
            cnt++;
    }

    cout << cnt;

    /*
    C[1] = d/k + d/m + d/n + d/l;

    C[2] = d/(k*l) + d/(k*m) + d/(k*n) + d/(l*m) + d/(l*n) + d/(m*n);

    C[3] = d/(k*l*m) + d/(k*l*n) + d/(k*m*n) + d/(l*m*n);

    C[4] = d/(m*n*l*k);


    cout << C[1] - C[2] + C[3] - C[4];
    */

	return EXIT_SUCCESS;
}
