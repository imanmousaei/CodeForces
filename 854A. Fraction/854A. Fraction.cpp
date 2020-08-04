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



int main()
{
	int n;
	cin >> n;

	for(int i=n/2+1;i>=1;i--)
    {
        int b = max(i,n-i);
        int a = n-b;
        if( __gcd(a,b)==1 )
        {
            cout << a << " " << b;
            return EXIT_SUCCESS;
        }


    }


	return EXIT_SUCCESS;
}
