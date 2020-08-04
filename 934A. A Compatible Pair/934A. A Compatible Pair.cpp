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
#define arrsize(a) sizeof(a)/sizeof(a[0])
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = LLONG_MAX+1;

const int MAX = 1e4 + 7;
const int MOD = 1e9 + 7;


ll n , m,arr[MAX] , brr[MAX];

ll MX(int x) // if he hides lamp x
{
    ll mx = EPS;
    for(int i=0;i<n;i++)
    {
        if(i==x)
            continue;
        for(int j=0;j<m;j++)
        {
            mx = max(mx,arr[i]*brr[j]);
        }
    }

    return mx;
}


int main()
{
    cin >> n >> m;


    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i];
    }

    for(int i=0 ; i<m ; i++)
    {
        cin >> brr[i];
    }

    ll mn = MX(0);
    for(int i=0;i<n;i++)
    {
        mn = min(mn,MX(i));
        //cout << i << " " << MX(i) << endl;
    }

    cout << mn;

	return EXIT_SUCCESS;
}
