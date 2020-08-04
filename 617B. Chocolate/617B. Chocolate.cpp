/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
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

const ll MAX = 100 + 7;
const ll MOD = 1e9 + 7;

ll n,sz,ways=1;
vi one; // stores indexes of the nuts (ones)

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        bool f;
        cin >> f;
        if(f)
        {
            one.pb(i);
        }
    }

    sz = one.size();
    if(sz==0)
    {
        cout << 0;
        return 0;
    }
    if(sz==1)
    {
        cout << 1;
        return 0;
    }

    for(int i=0;i<sz-1;i++) // for every 1, calculate the number of ways until the next 1
    {
        int d = one[i+1]-one[i];
        ways *= d;
    }


    cout << ways;


	return EXIT_SUCCESS;
}
