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

int Danil,Olya,Slava,Ann,Nikita;

int main()
{
    string s;
    cin >> s;
    int n = s.size();

    for(int i=0;i<n;i++)
    {
        if(i+3<=n && s.substr(i,3)=="Ann")
            Ann++;
        if(i+4<=n && s.substr(i,4)=="Olya")
            Olya++;
        if(i+5<=n && s.substr(i,5)=="Slava")
            Slava++;
        if(i+5<=n && s.substr(i,5)=="Danil")
            Danil++;
        if(i+6<=n && s.substr(i,6)=="Nikita")
            Nikita++;
    }

    //cout << Danil << " " << Olya;
    if(Danil+Olya+Slava+Ann+Nikita==1) //(Danil==1 || Olya==1 || Slava==1 || Ann==1 || Nikita==1)
        cout << "YES";
    else
        cout << "NO";


	return EXIT_SUCCESS;
}
