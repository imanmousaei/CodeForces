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
#define CP(x) cout << "CP " << x << endl;

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

ll n,k,A,B,cost;

int main()
{
    cin >> n >> k >> A >> B;

    if(k==1)
    {
        cout << A*(n-1);
        return 0;
    }

    while(n>1)
    {
        if(n<k)
        {
            //CP(1);
            cost += A*(n-1);
            n = 1;
        }
        else if(n%k)
        {
            //CP(2);
            cost += A*(n%k);
            n = n-n%k;
        }
        else
        {
            //CP(3);
            ll s = n/k;
            cost += min((n-s)*A,B);
            n = s;
        }
        //cout << n << " " << cost << endl;
    }

    cout << cost;

	return EXIT_SUCCESS;
}
