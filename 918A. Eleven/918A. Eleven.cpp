/**
Programmer : Iman Mousaei

Accepted
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

const int MAX = 1e3 + 7;
const int MOD = 1e9 + 7;

ll f[MAX];
char s[MAX];

void fib(int n)
{
    f[0] = 1;
    f[1] = 1;
    s[1] = 'O';
    for(int i=2;i<=n;i++)
    {
        f[i] = f[i-2] + f[i-1];
        if(f[i]>n)
            return;

        s[f[i]] = 'O';
    }
}

int main()
{
    int n;
    cin >> n;

    fib(n);

    for(int i=1;i<=n;i++)
    {
        if(s[i]=='O')
            cout << 'O';
        else
            cout << 'o';
    }



	return EXIT_SUCCESS;
}
