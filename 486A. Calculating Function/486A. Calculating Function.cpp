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

ll f(ll n)
{
    if(n&1)
        return  -1 * (n+1)/2;
    return n/2;
}

int main()
{
    ll n;
    cin >> n;

    cout << f(n);


	return EXIT_SUCCESS;
}
