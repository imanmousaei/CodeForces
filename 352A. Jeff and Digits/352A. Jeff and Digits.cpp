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

int n,z,f,sum;

int main()
{
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        sum += a;
        if(a==0)
            z++;
        else
            f++;
    }


    int m = 0;
    for(int i=f;i>=0;i--)
    {
        if((i*5)%9==0)
        {
            m = i;
            break;
        }
    }

    //cout << "zeros = " << z << "  fives = " << m << endl ;

    if(z==0)
    {
        cout << -1;
        return EXIT_SUCCESS;
    }

    else if(z*m==0)
    {
        cout << 0;
        return EXIT_SUCCESS;
    }

    for(int i=0;i<m;i++)
    {
        cout << 5;
    }

    for(int i=0;i<z;i++)
    {
        cout << 0;
    }


	return EXIT_SUCCESS;
}
