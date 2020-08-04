/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define ___ ios_base::sync_with_stdio(false);
#define pb push_back
#define mp make_pair
#define F first
#define S second
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
using namespace std;
typedef std::vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

vector<string> v;
int h1, a1, c1, h2, a2;

int main()
{
  cin >> h1 >> a1 >> c1 >> h2 >> a2;

    while(h2 > 0)
    {
        if(h1 > a2 || h2-a1 <= 0)
        {
            h2 -= a1;
            v.pb("STRIKE");
        }

        else
        {
            h1 += c1;
            v.pb("HEAL");
        }

        h1 -= a2;

    }

    cout << v.size() << endl;

    for(auto i:v)
    {
        cout << i << endl;
    }

  return 0;



	return EXIT_SUCCESS;
}
