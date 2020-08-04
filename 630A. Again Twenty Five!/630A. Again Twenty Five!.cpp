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
const ll MOD = 100;

ll power(ll a,ll b)
{
    if (b==0)
        return 1;

    ll p = power(a,b>>1) ;

    p = (1LL * p * p) % MOD;


    if(b&1)
        p = (1LL *p*a) % MOD;

    return p;
}

int main()
{
    ll n;
    cin >> n;

    cout << power(5,n);


	return EXIT_SUCCESS;
}
