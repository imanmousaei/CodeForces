/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CP(x) cout << "CP " << x << endl;
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

ll n;

// primes under 10 = { 2 , 3 , 5 , 7 }

int main()
{
    cin >> n;

    ll unwanted = n/2 + n/3 + n/5 + n/7 - (n/6 + n/10 + n/14 + n/15 + n/21 + n/35) + n/30 + n/105 + n/70 + n/42 - (n/210);

    ll ans = n-unwanted;

    cout << ans;



	return EXIT_SUCCESS;
}
