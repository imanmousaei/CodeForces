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

const int MAX = 1e6 + 7;
const int MOD = 1e9 + 7;

bool is_prime[MAX];

void sieve(int n)
{
    is_prime[1] = false;
    for(int i=2;i<=n;i++)
    {
        is_prime[i] = true;
    }

    for(int i=2;i<=sqrt(n);i++)
    {
        for(int j=i*i;j<=n;j+=i)
        {
            is_prime[j] = false;
        }
    }
}

int main()
{
    int n;
    cin >> n;
    sieve(n);


    for(int i=2;i<=n;i++)
    {
        if(!is_prime[i] && !is_prime[n-i])
        {
            cout << i << " " << n-i;
            return EXIT_SUCCESS;
        }
    }

    //cout << is_prime[n];

	return EXIT_SUCCESS;
}
