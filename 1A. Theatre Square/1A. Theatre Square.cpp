/**
Coder : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);

using namespace std;

typedef long long ll;
const ll LLINF = LLONG_MAX - 7;
const int INF = INT_MAX - 7;

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

/*
int ceiling(double n)
{
    if( (int)n == n  )
        return n;
    else
        return n+1;
}
*/

int main()
{
    int n,m,a;
    cin >> n >> m >> a;

    ll ans = ceil( (double)n/a ) * ceil( (double)m/a );
    cout << ans;



	return EXIT_SUCCESS;
}
