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

const int INF = 1e9 + 7;
const int MAX = 1e6 + 7;
const int MOD = 1e9 + 7;

int n,m;
string a,b;

void do_zeros()
{
    int i = n-1;
    while(a[i]-'0' == 0 && n>1)
    {
        n--;
        i--;
    }

    i = m-1;
    while(b[i]-'0' == 0 && m>1)
    {
        m--;
        i--;
    }
}

int is_bigger() // 1 : a>b , -1 : b>a , 0 : a=b
{
    if(n>m)
        return 1;
    else if(n<m)
        return -1;

    for(int i=n-1;i>=0;i--)
    {
        if(a[i]>b[i])
            return 1;
        else if (a[i]<b[i])
            return -1;
    }

    return 0;
}

int main()
{
    cin >> a >> b;

    n = a.size();
    m = b.size();

    reverse(ALL(a));
    reverse(ALL(b));

    do_zeros();

    int ans = is_bigger(); // 1 : a>b , -1 : b>a , 0 : a=b
    if(ans==1)
        cout << ">";
    else if(ans==-1)
        cout << "<";
    else
        cout << "=";


	return EXIT_SUCCESS;

}

