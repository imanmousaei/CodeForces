/**
Coder : Iman Mousaei

n^ak takes time
(n^k)^a is good

Fucking Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);

using namespace std;

typedef long long ll;
const ll LLINF = 1e18 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

int power(ll a,ll b)
{
    if (b==0)
        return 1;

    ll p = power(a,b>>1) ;

    p = (1LL * p * p) % MOD;


    if(b&1)
        p = (1LL *p*a) % MOD;

    return p;
}

ll pw(ll p, ll v) // better
{
    ll cur, res;
    cur = p;
    res = 1;
    while (v)
    {
        if (v & 1)
        {
            res *= cur;
            res %= MOD;
        }
        v /= 2;
        cur *= cur;
        cur %=  MOD;
    }

    return res % MOD;
}

ll binpow( ll a , ll n )
{
	if ( n==0 ) return 1 ;
	if ( n&1 ) {
		ll f = binpow( a , n-1 ) % MOD ;
		return (f*a)%MOD ;
	}
	else {
		ll f = binpow( a , n/2 ) % MOD ;
		return (f*f) % MOD ;
	}
}

ll n,m,k;

int main()
{
    cin >> n >> m >> k;

    if(n*m==0)
    {
        cout << 0;
        return EXIT_SUCCESS;
    }

    if(n<=1 && m%2==0 && k==-1)
    {
        cout << 0;
        return EXIT_SUCCESS;
    }

    if(m<=1 && n%2==0 && k==-1)
    {
        cout << 0;
        return EXIT_SUCCESS;
    }


    if(n<=1 || m<=1)
    {
        cout << 1;
        return EXIT_SUCCESS;
    }

    if(m%2!=n%2 && k==-1)
    {
        cout << 0;
        return EXIT_SUCCESS;
    }

    //ll ans = power(2,(n-1)*(m-1));
    //ll ans = binpow(2,(n-1)*(m-1));
    //ll ans = pw(2,(n-1)*(m-1));

    ll x = (pw(2, n - 1));
    x = (pw(x, m - 1));

    cout << x%MOD;

	return EXIT_SUCCESS;
}
