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
#define FOR(i, n) for (int i = 0; i < (n); i++)
#define EPS (1e-8)
#define arrsize(a) sizeof(a)/sizeof(a[0])
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e7 + 7;
const int MOD = 1e9 + 7;

ll n,x,a[MAX],cnt[MAX],s;

int main()
{
    cin >> n >> x;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        int XOR = a[i]^x;
        s += cnt[XOR];
        cnt[a[i]]++;
    }

    cout << s;


	return 0;
}
