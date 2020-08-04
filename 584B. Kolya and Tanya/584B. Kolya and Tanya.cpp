/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;


int power(int a,int b)
{
    if (b==0)
        return 1;

    int p = power(a,b>>1) ;

    p = (1LL * p * p) % MOD;


    if(b&1)
        p = (1LL *p*a) % MOD;

    return p;
}

int main()
{
    ll n;

    cin >> n;

    ll all = power(3,3*n);

    ll unwanted = power(7,n);

    ll ans = all-unwanted;

    while(ans<0)
    {
        ans += MOD;
    }

    cout << ans;

	return EXIT_SUCCESS;
}
