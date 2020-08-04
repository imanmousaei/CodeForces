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

int n,m,p;

int main()
{
	cin >> m >> n;
    p = m * n;
/*
    if(!(p&1) )
    {
        cout << p/2;
    }
    else
    {
        cout << (m/2 + m%2) * (n/2 + n%2);
    }
*/

    cout << p/2;


	return EXIT_SUCCESS;
}
