/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

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

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e5 + 7;

//Be Name Khoda
//Ahay! Hormat ha hefz she baradare man ...
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
template <typename T> using ordered_set =  tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using ordered_multiset =  tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
typedef long long ll;
typedef long double ld;
const int MOD = (int)1e9 + 7;
const int MAXN = (int)1e5 + 7;
const int infint = (int)2e9;
const ll inf = (ll)1e18 + 7;
string f0 = "What are you doing at the end of the world? Are you busy? Will you save us?";
string p = "What are you doing while sending ";
string q = "Are you busy? Will you send ";
ll sz[MAXN];
char f(ll n, ll k)
{
	k--;
	if(k >= sz[n])
		return '.';
	if(n == 0)
	{
		return f0[k];
	}
	if(k < p.size())
		return p[k];
	k -= p.size();
	if(k == 0)
		return '"';
	k--;
	if(k < sz[n - 1])
		return f(n - 1, k + 1);
	k -= sz[n - 1];
	if(k == 0)
		return '"';
	k--;
	if(k == 0)
		return '?';
	k--;
	if(k == 0)
		return ' ';
	k--;
	if(k < q.size())
		return q[k];
	k -= q.size();

	if(k == 0)
		return '"';
	k--;
	if(k < sz[n - 1])
		return f(n - 1, k + 1);

	k -= sz[n - 1];
	if(k == 0)
		return '"';
	k--;
	return '?';
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//f[i] = p + "f[i - 1]"?  + q + "f[i - 1]" + ?;
	ll qu;
	cin >> qu;
	sz[0] = f0.size();
	for (int i = 1; i < MAXN; i++)
	{
		if(sz[i - 1] == inf)
		{
			sz[i] = inf;
		}
		else
		{
			sz[i] = 2 * sz[i - 1] + p.size() + q.size() + 7;
			if(sz[i] >= inf)
				sz[i] = inf;
		}
	}
	for (int i = 0; i < qu; i++)
	{
		ll n, k;
		cin >> n >> k;
		cout << f(n, k);
	}
}
