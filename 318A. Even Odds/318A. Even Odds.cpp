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

ll n,k,odd,even;

int main()
{
    cin >> n >> k;
    odd = n/2 + n%2;
    even = n - odd;

    if(k<=odd)
        cout << 2*k - 1;
    else
        cout << 2*(k-odd);

    //cout << endl << odd << "  " << even;

	return EXIT_SUCCESS;
}
