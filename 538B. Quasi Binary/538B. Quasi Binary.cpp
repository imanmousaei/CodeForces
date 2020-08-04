/**
Programmer : Iman Mousaei

Accepted
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

const int MAX = 100 + 7;
const int MOD = 1e9 + 7;

string int_to_string(int r)
{
    stringstream ss;
    ss << r;
    string str = ss.str();
    return str;
}

int a,mx;
vi n;

/*
void solve(int k)
{
    int p=0;

    for(int i=0;i<n;i++)
    {
        int d = k/pow(10,n-i-1);
        if(d>0)
            p = p*10+1;
        else
            p = p*10;
    }

    if(p>0)
        ans.pb(p);
    else
        exit(0);

    solve(k-p);

}
*/

int main()
{
    cin >> a;

    while(a)
    {
        n.pb(a % 10);
        a /= 10;
    }

    for(int i=0;i<n.size();i++)
    {
        mx = max(mx,n[i]);
    }

    cout << mx << endl;

    reverse(n.begin(),n.end());

    while(mx--)
    {
        bool flag = false;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]>0)
            {
                cout << 1;
                n[i]--;
                flag = true;
            }

            else if(flag)
                cout << 0;
        }
        cout << " ";
    }




    /*
    string s = int_to_string(a);
    n = s.size();

    //cout << "n = " << n << endl;

    int mx = 0;
    for(int i=0;i<n;i++)
    {
        int d = s[i] - '0';
        mx = max(d,mx);
    }

    cout << mx << endl;

    solve(n);

    for(auto i:ans)
    {
        cout << i << " ";
    }
*/

	return EXIT_SUCCESS;
}
