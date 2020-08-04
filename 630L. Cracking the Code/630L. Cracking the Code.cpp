/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CP(x) cout << "CP " << x << endl;
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e9 + 7;
const ll MOD = 1e5;

string i2s(ll a)
{
    stringstream ss;
    ss << a;
    string str = ss.str();
    return str;
}


int s2i(string s)
{
    int n = 0;
    for(int i = 0; i < s.length(); i ++)
        n = n * 10 + s[i] - '0';

    return n;
}

ll power(ll a,ll b)
{
    if (b==0)
        return 1;

    ll p = power(a,b>>1) ;

    p = (1LL * p * p) % MOD;


    if(b&1)
        p = (1LL *p*a) % MOD;

    return p;
}

int main()
{
    string str;
    cin >> str;

    string s = "";
    s+=str[0];
    s+=str[2];
    s+=str[4];
    s+=str[3];
    s+=str[1];


    ll p = s2i(s);

    p = power(p,5);

    s = i2s(p);

    if(s.size()<5)
    {
        int m = 5-s.size();
        while(m--)
        {
            cout << 0;
        }
    }

    cout << p;


	return 0;
}
