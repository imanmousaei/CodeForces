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

vi v;

int main()
{
    int n;
    cin >> n;
    int sz = n;
    for(int i=0;i<n;i++)
    {
        int tmp;
        cin >> tmp;
        v.pb(tmp);
    }

    reverse(v.begin(),v.end());

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(v[j]==v[i] && v[j]!=-1)
            {
                v[j]=-1;
                sz--;
            }
        }
    }

    reverse(v.begin(),v.end());

    cout << sz << endl;

    for(auto a:v)
    {
        if(a>0)
            cout << a << " ";
    }

	return 0;
}
