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

ll r1,g1,b1,cnt[7],r,g,b,mx;

int main()
{
    cin >> r1 >> g1 >> b1;

    if(r1==g1 && r1==b1)
    {
        cout << r1;
        return 0;
    }

    for(int i=0;i<3;i++)
    {
        r = r1;
        g = g1;
        b = b1;

        if(r>=i && g>=i && b>=i)
        {
            cnt[i]+=i;
            r-=i;
            b-=i;
            g-=i;
        }

        mx = max(mx,cnt[i]+r/3 + g/3 + b/3);
    }

    cout << mx;


	return EXIT_SUCCESS;
}
