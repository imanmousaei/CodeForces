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

const ll MAX = 1e3 + 7;
const ll MOD = 1e9 + 7;

ll C[MAX][MAX];

ll c(int r,int n) // entekhab r az n
{
    if(r>n)
        return 0;
    if(r==0||r==n)
        return 1;
    if(C[r][n]!=0)
    {
        return C[r][n];
    }

    return C[r][n] = (c(r-1,n-1) + c(r,n-1))%MOD;
}

int main()
{
    ll n,m,k;
    cin >> n >> m >> k;

	cout << (c(2*k,n-1) * c(2*k,m-1)) % MOD;

	return EXIT_SUCCESS;
}
