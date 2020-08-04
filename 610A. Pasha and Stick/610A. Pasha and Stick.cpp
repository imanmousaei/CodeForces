/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout << "CP " << x << endl;
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

ll n;

int main()
{
    cin >> n;

    if(n&1)
    {
        cout << 0;
        return 0;
    }

    ll p = n/2;

    cout << (p+1)/2 - 1;


	return 0;
}
