/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

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
#define print(a) for(int i=0;i<arrsize(a);i++) { cout << a[i] << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#endif // DEBUG
using namespace std;
typedef long long ll;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

int n,a[MAX],cnt[MAX],ans=1;

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    if(a[0] < a[1])
    {
        cnt[a[0]]--;
        cnt[a[1]]--;
    }

    int mx = max(a[0], a[1]);
    int mn = min(a[0], a[1]);

    for(int i = 2; i < n; i++)
    {
        if(mx > a[i] && a[i] > mn)
            cnt[mx]++;

        if(a[i] > mx)
        {
            mn = mx;
            mx = a[i];
            cnt[a[i]]--;
        }

        else if(a[i] > mn)
            mn = a[i];
    }

    int maxx = -INF;
    for(int i = 1; i <= n; i++)
    {
        if(cnt[i] > maxx)
        {
            maxx = cnt[i];
            ans = i;
        }
    }

    cout << ans;

	return EXIT_SUCCESS;
}
