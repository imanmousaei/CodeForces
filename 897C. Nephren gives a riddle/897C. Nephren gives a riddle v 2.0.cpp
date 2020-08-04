/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define VAL(x) #x << " = " << (x) << "   "
#define SQR(a) ((a) * (a))
#define SZ(x) ((int) (x).size())
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define FOREACH(i, x) for(__typeof((x).begin()) i = (x).begin(); i != (x).end(); i ++)
#define FOR(i, n) for (int i = 0; i < (n); i ++)
#define EPS (1e-8)
#define arrsize(a) sizeof(a)/sizeof(a[0])

#define DEBUG false
#if DEBUG
#define print(a) for(int i=0;i<arrsize(a);i++) { cout << a[i] << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#endif // DEBUG
typedef long long ll;

using namespace std;

const ll LLINF = 1e18 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

string s[7];
ll q,sz[MAX];

/// p=s[0] , q = s[1] , r = s[2] , s = s[3]
char f(ll n, ll k)
{
	if(k>=sz[n])
    {
        return '.';
    }

	if(n == 0)
        return s[0][k];

	if(k < s[1].size())
        return s[1][k];

	k-= s[1].size();

	if(k<sz[n-1])
        return f(n-1, k);

	k-= sz[n-1];
	if(k<s[2].size())
        return s[2][k];

	k-= s[2].size();
	if(k<sz[n-1])
        return f(n-1, k);

	k-= sz[n-1];
	if(k<s[3].size())
        return s[3][k];

	return '.';

}


int main()
{
    s[0] = "What are you doing at the end of the world? Are you busy? Will you save us?" ;
    s[1] = "What are you doing while sending \"" ;
    s[2] = "\"? Are you busy? Will you send \"" ;
    s[3] = "\"?" ;

	sz[0] = s[0].size();

	for(int i=1; i<=55; i++)
    {
        sz[i] = 2*sz[i-1] + s[1].size()+ s[2].size() + s[3].size();

    }

    //cout << sz[1] << endl;
    //cout << sz[55] << " " << sz[56];

    //cout << s[0].size() << " " << s[1].size() << " " << s[2].size() << " " << s[3][0] << endl;

    for(int i=56;i<MAX;i++)
    {
        sz[i] = LLINF;
    }

    cin >> q;
    string ans="";

	while(q--)
    {
        ll n,k;
        cin >> n >> k;
        ans += f(n,k-1);
    }

    cout << ans;

    return 0;
}
