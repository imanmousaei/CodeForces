/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout << "CP " << x << endl;
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

ll n,m,kmin,kmax,r,t,l;

int main()
{
    cin >> n >> m;

    l = n-m+1;

    kmax = l*(l-1)/2;

    t = n/m;

    r = n%m;

    kmin = r*(t*(t+1))/2 ;
    if(t>=2)
    {
        kmin += (m-r)*(t*(t-1))/2;
    }

    cout << kmin << " " << kmax;

    //cout << t << " " << r ;

	return 0;
}
