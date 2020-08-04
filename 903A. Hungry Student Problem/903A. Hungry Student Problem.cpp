/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define mp make_pair
#define F first
#define S second
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
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 100 + 7;
const int MOD = 1e9 + 7;

bool dp[MAX];

int main()
{
    int n;

    cin >> n;


    dp[0] = true;
    dp[1] = false;
    dp[2] = false;
    dp[3] = true;

    for(int i=4;i<=100;i++)
    {
        if(dp[i-3]||dp[i-7])
            dp[i] = true;
        else
            dp[i] = false;
    }


    while(n--)
    {
        int a;
        cin >> a;
        if(dp[a])
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }


	return EXIT_SUCCESS;
}
