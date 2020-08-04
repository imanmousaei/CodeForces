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

const ll MAX = 1e3 + 7;
const ll MOD = 1e9 + 7;

int n,l,a[MAX],dis;

int main()
{
    cin >> n >> l;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }

    sort(a,a+n);

    for(int i=0;i<n-1;i++)
    {
        int t = a[i+1] - a[i];
        dis = max(dis,t);

    }

    int d = dis/2;
    d = max(a[0],d);
    d = max(l-a[n-1],d);

    cout << d;

    if(d==dis/2 && dis&1)
    {
        cout << ".5";
    }

	return 0;
}
