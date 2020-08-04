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
#define print(a) for(int i=0;i<arrsize(a);i++) { cout << a[i] << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#endif // DEBUG

using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;
const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

bool is_lucky(int a)
{
    while(a)
    {
        int d = a%10;
        if(d!=4 && d!=7)
            return false;
        a/=10;
    }

    return true;
}

int main()
{
    int n;
    cin >> n;

    if(is_lucky(n))
    {
        cout << "YES";
        return EXIT_SUCCESS;
    }

    for(int i=4;i<=n/2+1;i++)
    {
        if(is_lucky(i) && n%i==0)
        {
            cout << "YES";
            return EXIT_SUCCESS;
        }
    }

    cout << "NO";

    //cout << is_lucky(n);

	return EXIT_SUCCESS;
}
