/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout << "CP" << x << endl;
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
const ll MOD = 1e9 + 7;

int n,t;

int main()
{
    cin >> n >> t;

    if(t==10)
    {
        if(n<2)
        {
            cout << -1;
            return 0;
        }

        for(int i=0;i<n-2;i++)
        {
            cout << 1;
        }
        cout << 10;
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout << t;
        }
    }


	return 0;
}
