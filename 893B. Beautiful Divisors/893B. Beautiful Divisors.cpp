/**
Coder : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back

using namespace std;

typedef long long ll;
const ll LLINF = LLONG_MAX - 7;
const int INF = INT_MAX - 7;

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

vector <ll> v;

ll power(ll a, ll n)
{
	if(n == 0)
		return 1;

	if(n == 1)
		return a;

	ll t = power(a, n/2);

	t *= t ;

	t = (t * power(a,n%2));

	return t;
}

int main()
{
    ___
	int n;
	cin >> n;

	for(int i = 1; i <= n; i++)
    {
        if(n%i==0)
            v.pb(i);
    }

	for(int i = v.size()-1; i >= 0; i--)
    {
			int k = 1;
			while(1)
            {
				ll pw = power(2, k)-1;
				pw *= power(2, k-1);

				if(pw > v[i])
					break;

				if(pw == v[i])
                {
                    cout << v[i];
					return EXIT_SUCCESS;
				}

				k++;
			}
	}

    cout << 1;

	return EXIT_SUCCESS;
}
