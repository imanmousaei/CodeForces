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

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

string one[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
string teen[] = {"ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
string ty[] = {" ", "ten", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

int main()
{
    int n;
    cin >> n;

    if(n<=9)
    {
        cout << one[n];
    }
    else if(n<=19)
    {
        cout << teen[n-10];
    }
    else if(n%10==0)
    {
        cout << ty[n/10];
    }
    else
    {
        int a = n/10 , b = n%10;
        cout << ty[a] << "-" << one[b];
    }


	return EXIT_SUCCESS;
}
