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
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

ll n,k,a[MAX];

int main()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n+1);

/*
    for(int i=1;i<=n;i++)
    {
        cout << a[i] << " ";
    }
*/

    if(k==0)
    {
        if(a[1]-1>=1)
            cout << a[1]-1;
        else
            cout << -1;
        return 0;
    }

    if(k==n)
    {
        cout << a[n];
        return 0;
    }

    if(a[k+1]==a[k])
    {
        cout << -1;
        return 0;
    }

    else
    {
        cout << a[k];
        return 0;
    }




	return EXIT_SUCCESS;
}
