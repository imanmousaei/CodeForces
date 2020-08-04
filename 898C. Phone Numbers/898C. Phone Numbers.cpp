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

bool is_suffix(string s1,string s2)
{
    int n1=s1.size(),n2=s2.size();
    if(n2>n1)
    {
        swap(s1,s2);
        swap(n1,n2);
    }

    if(s1.substr(n1-n2,n2)==s2)
        return true;
    return false;
}

int main()
{
    int n;
    cin >> n;

    //cout << is_suffix("12","612");

    cout << n << endl;

    for(int i=0;i<n;i++)
    {
        string s;
        int a;
        vector<string> v;
        cin >> s >> a;

        while(a--)
        {
            string p;
            cin >> p;
            v.pb(p);
        }

        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
            {
                if(is_suffix(v[i],v[j]))
                {
                    if(i==j)
                        continue;
                    int n1=v[i].size(),n2=v[j].size();
                    if(n2>n1)
                    {
                        v[i] = "!";
                    }
                    else
                    {
                        v[j] = "!";
                    }
                }
            }
        }

        int cnt = 0;
        cout << s << " " ;
        for(auto i:v)
        {
            if(i!="!")
                cnt++;
        }

        cout << cnt << " ";

        for(auto i:v)
        {
            if(i!="!")
                cout << i << " ";
        }

        cout << endl;


    }


	return EXIT_SUCCESS;
}
