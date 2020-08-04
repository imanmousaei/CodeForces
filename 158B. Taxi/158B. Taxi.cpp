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
#define print(a) for(auto i:a) { cout << i << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#else
#define print(a)
#define printsz(a,sz)
#endif // DEBUG

using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e5 + 7;
const int MOD = 1e9 + 7;

int cnt[MAX],n,cntr;

int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
    {
        int s;
        cin >> s;
        cnt[s]++;
    }

    if(cnt[3]>0)
    {
        cntr = min(cnt[3],cnt[1]);
        cnt[3]-=cntr;
        cnt[1]-=cntr;
        cntr+=cnt[3];
        cnt[3] = 0;
    }

    cntr+=cnt[4];
    cnt[4] = 0;


    if(cnt[2]>1)
    {
        cntr+=cnt[2]/2;
        cnt[2]%=2;
    }

    if(cnt[2]>0)
    {
        cntr += 1;
        cnt[2]-=1;
        if(cnt[1])
            cnt[1]-=2;
    }

/*
    cout << cntr << endl;
    for(int i=1;i<=4;i++)
        cout << "#" << cnt[i] << '\t';
*/

    if(cnt[1]>0)
    {
        cntr += cnt[1]/4 ;
        cnt[1] = cnt[1]%4;
    }

    if(cnt[1]>0)
        cntr+=1;

    cout << cntr << endl;

	return EXIT_SUCCESS;
}
