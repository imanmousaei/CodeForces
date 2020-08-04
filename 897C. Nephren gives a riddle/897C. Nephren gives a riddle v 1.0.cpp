/**
Programmer : Iman Mousaei

Memory Limit
string 1e18 takes so much memory
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
const int MOD = 1e9 + 7;

string f[3],ans;
ll n,k,q;

int main()
{
	f[0] = "What are you doing at the end of the world? Are you busy? Will you save us?";

	cin >> q;
	while(q--)
    {
        string str = f[0];
        cin >> n >> k;
        if(n>=1)
        {
            for(int i=1;i<=n;i++)
            {
                f[i] = "What are you doing while sending \"" + f[i-1] + "\"? Are you busy? Will you send \""
                + f[i-1] + "\"?" ;
                /*
                bool j = i&1;
                f[j] = "What are you doing while sending \"" + f[!j] + "\"? Are you busy? Will you send \""
                + f[!j] + "\"?" ;
                str = f[j];
                cout << str << endl;
                */
            }
        }


        if(str.size()<k)
        {
            //cout << ".";
            ans += ".";
        }
        else
        {
            //cout << str[k-1];
            ans += str[k-1];
        }

    }

    cout << ans;

	return EXIT_SUCCESS;
}
