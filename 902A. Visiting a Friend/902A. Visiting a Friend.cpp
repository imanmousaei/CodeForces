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

const int MAX = 100 + 7;
const int MOD = 1e9 + 7;

int a[MAX],b[MAX],n,m;
bool mrk[MAX];

int main()
{
    cin >> n >> m;
    For(i,0,n)
    {
        cin >> a[i] >> b[i];
    }

    if(a[0]!=0)
    {
        cout << "NO";
        return EXIT_SUCCESS;
    }

    For(i,0,n)
    {
        if(b[i-1]<a[i])
        {
            cout << "NO";
            return EXIT_SUCCESS;
        }

        if(b[i] == m)
        {
            cout << "YES";
            return EXIT_SUCCESS;
        }

        if(a[i+1] > b[i])
        {
            cout << "NO";
            return EXIT_SUCCESS;
        }

        b[i+1] = max(b[i], b[i+1]);
  }


    cout << "NO";

	return EXIT_SUCCESS;
}
