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
const ll MOD = 1e9 + 7;

string s;
int n;

int main()
{
    cin >> n >> s;

    for(int i=1;i<n;i++)
    {
        if(s[i]=='1')
        {
            s[i] = '!';
        }
    }

    for(int i=0;i<n;i++)
    {
        if(s[i]!='!')
        {
            cout << s[i];
        }
    }


	return 0;
}
