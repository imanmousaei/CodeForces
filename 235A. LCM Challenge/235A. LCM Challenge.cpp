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

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

ll lcm[10],n,mx=1;

long long LCM(ll a,ll b)
{
    return a*b/__gcd(a,b);
}

int main()
{

    cin >> n;

    lcm[0] = LCM(LCM(n,n-1),n-2);
    lcm[1] = LCM(LCM(n,n-1),n-3);
    lcm[2] = LCM(LCM(n-2,n-1),n-3);
    lcm[3] = LCM(n,n);


    for(int i=0;i<=3;i++)
    {
        if(mx < lcm[i])
            mx = lcm[i];
    }

    cout << mx;


	return EXIT_SUCCESS;
}

/* Better :

if(n==1 || n==2)
    {
		cout << n;
		return EXIT_SUCCESS;
	}


	if(n%2 == 1)
    {
        lcm = n*(n-1)*(n-2);
    }

	else if(n%3 != 0)
    {
        lcm = n*(n-1)*(n-3);
    }

	else
    {
        lcm = (n-1)*(n-2)*(n-3);
    }

	cout << lcm;

	*/
