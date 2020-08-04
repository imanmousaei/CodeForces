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
#define print(a) for(int i=0;i<arrsize(a);i++) { cout << a[i] << " " ; }
#define printsz(a,sz) for(int i=0;i<sz;i++) { cout << a[i] << " " ; }
#endif // DEBUG
typedef long long ll;

using namespace std;

const ll LLINF = 1e17 + 7;
const int INF = 1e9 + 7;

const int MAX = 1e9 + 7;
const int MOD = 1e9 + 7;

ll k,p,cnt;
ll sum;

string i2s(ll a)
{
    stringstream ss;
    ss << a;
    string str = ss.str();
    return str;
}

ll s2i(string s)
{
    ll n = 0;
    for(ll i = 0; i < s.length(); i ++)
        n = n * 10 + s[i] - '0';

    return n;
}

bool is_palindrome(ll a)
{
    string s = i2s(a);
    string sr = s;
    reverse(sr.begin(),sr.end());
    if(s==sr)
        return true;
    return false;
}

bool is_palindrome(string s)
{
    string sr = s;
    reverse(sr.begin(),sr.end());
    if(s==sr)
        return true;
    return false;
}

int main()
{
    cin >> k >> p;
    /*
    k = 1e5;
    p = 1e9;
    */

    for(ll n=2;cnt!=k;n+=2)
    {
        for(ll i=pow(10,n/2-1);i<pow(10,n/2);i++)
        {
            string s = i2s(i);
            string sr = s;
            reverse(sr.begin(),sr.end());
            s+=sr;

            ll a = s2i(s);

            //cout << s << endl;
            //cout << a << endl;

            sum = (sum+a)%p;
            cnt++;

            if(cnt==k)
            {
                cout << sum%p;
                return EXIT_SUCCESS;
            }
        }

    }


	return EXIT_SUCCESS;
}
