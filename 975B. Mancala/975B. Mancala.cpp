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

const ll MAX = 14 + 7;
const ll MOD = 1e9 + 7;

ll n=14,a[MAX],aa[MAX],mx;

void spread(int i)
{
    ll x = a[i];
    a[i] = 0;
    ll each = x/14;
    ll some = x%14;
    //cout << i << " " << some << " " << each << endl;
    for(int j=0;j<n;j++)
    {
        a[j] += each;
    }

    for(int j=i+1;j<n+n;j++)
    {
        ll k = j%n;
        if(some>0)
        {
            some--;
            a[k]++;
        }
    }

}

void print()
{
    for(int i=0;i<n;i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

ll score()
{
    ll cnt = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            cnt+=a[i];
        }
    }
    return cnt;
}

void cp()
{
    for(int i=0;i<n;i++)
    {
        a[i] = aa[i];
    }
}

int main()
{
    for(int i=0;i<n;i++)
    {
        cin >> aa[i];
    }

    for(int i=0;i<n;i++)
    {
        if(aa[i]>0)
        {
            cp();
            spread(i);
            //print();
            if(mx<score())
            {
                mx = score();
            }
        }
    }

    cout << mx;

	return 0;
}
