/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define For(i,a,b) for (int i=a;i<b;i++)
#define Ford(i,a,b) for (int i=a;i>=b;i--)
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
#define print(a) for(auto i:a) { cout << i << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#else
#define print(a)
#define printsz(a,sz)
#endif // DEBUG

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

int h,a[MAX],cnt;
vi ans1,ans2;
int l1,l2;

int main()
{
    cin >> h;
    For(i,0,h+1)
    {
        cin >> a[i];
        if(a[i]>=2)
            cnt++;
    }

    if(cnt<=1)
    {
        cout << "perfect";
        return EXIT_SUCCESS;
    }

    cout << "ambiguous" << endl;
    cnt = 0;
    ans1.pb(0);
    ans2.pb(0);
    int cur = 1;

    For(i,1,h+2)
    {
        if(a[i]>=2)
        {
            l1 = cur;
            l2 = cur-1;
            cnt++;
        }
        if(cnt==2)
        {
            For(j,0,a[i])
            {
                ans1.pb(l1);
                ans2.pb(l2);
                l1 = i; l2 = i;
            }

            cur+=a[i];
            continue;
        }

        For(j,0,a[i])
        {
            ans1.pb(cur);
            ans2.pb(cur);
        }

        cur+=a[i];


    }

    for(auto i:ans1)
    {
        cout << i << " ";
    }

    cout << endl;

    for(auto i:ans2)
    {
        cout << i << " ";
    }

	return EXIT_SUCCESS;
}
