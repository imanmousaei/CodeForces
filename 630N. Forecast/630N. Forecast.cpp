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

int a,b,c;

int main()
{
	cin >> a >> b >> c;

	double delta = (b*b) - (4*a*c);

	double x1 = (-1*b + sqrt(delta))/(2*a);

	double x2 = (-1*b - sqrt(delta))/(2*a);

	//cout << delta << endl;

	cout << setprecision(20) << max(x1,x2) << endl << min(x1,x2);

	return 0;
}
