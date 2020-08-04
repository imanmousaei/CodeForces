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

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

ll C(ll n, ll k)
{
    ll res = 1;
    if (k > n - k)
    k = n - k;
    for (ll i = 0; i < k; ++i)
    {
        res *= (n - i);
        res /= (i + 1);
    }

    return res;
}


int main()
{
    ll n,m,t,ans=0;

    cin >> n >> m >> t;

    for(int b=4;b<=n;b++)
    {
        int g = t-b;
        if(g>=1 && m>=g)
        {
            ans += C(n,b) * C(m,g);
        }
        //cout << b << " " << g << " " << ans << endl;
    }


    cout << ans;


	return EXIT_SUCCESS;
}
