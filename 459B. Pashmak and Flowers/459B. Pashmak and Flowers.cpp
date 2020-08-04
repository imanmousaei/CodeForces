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
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e6 + 7;
const int MOD = 1e9 + 7;

ll n,b[MAX],d,ways,mx,mn,cntmx,cntmn;

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> b[i];
    }

    sort(b,b+n);

    mx = b[n-1];
    mn = b[0];
    d = mx - mn;

    if(d==0)
    {
        cout << 0 << " " << n*(n-1)/2;
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        if(b[i]==mx)
        {
            cntmx++;
        }
        else if(b[i]==mn)
        {
            cntmn++;
        }
    }

    ways = cntmn * cntmx;

    cout << d << " " << ways;


	return EXIT_SUCCESS;
}
