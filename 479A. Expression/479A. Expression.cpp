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

#define DEBUG false
#if DEBUG
#define print(a) for(auto i:a) { cout << i << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#else
#define print(a)
#define printsz(a,sz)
#endif // DEBUG

using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e3 + 7;
const int MOD = 1e9 + 7;

int m[20],mx;

int main()
{
    int a,b,c;
    cin >> a >> b >> c;

    m[0] = a*b*c;
    m[1] = a*b+c;
    m[2] = a+b+c;
    m[3] = a+b*c;
    m[4] = (a+b)*c;
    m[5] = a*(b+c);

    for(int i=0;i<=10;i++)
    {
        if(mx<m[i])
            mx = m[i];
    }

    cout << mx;

	return EXIT_SUCCESS;
}
