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

const ll MAX = 100 + 7;
const ll MOD = 1e9 + 7;

ll m[MAX],n,s;

int main()
{
    cin >> n >> s;
    for(ll i=0;i<n;i++)
    {
        ll h;
        cin >> h >> m[i];
        m[i] += 60*h;
        //cout << m[i] << endl;
    }

    if(m[0]>s)
    {
        cout << "0 0";
        return 0;
    }
    for(ll i=1;i<n;i++)
    {
        ll d = m[i]-m[i-1];
        if(d>=2+2*s)
        {
            ll ans = s+1 + m[i-1];
            cout << ans/60 << " " << ans%60;
            return 0;
        }
    }

    ll ans = m[n-1] + s + 1;
    cout << ans/60 << " " << ans%60;

	return 0;
}
