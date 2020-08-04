/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout << "CP " << x << endl;
#define S second
#define F first

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

map<string,int> ns;
int n,mx;
string winner;

int main()
{
    cin >> n;
    while(n--)
    {
        string s;
        cin >> s;
        ns[s]++;
        if(ns[s]>mx)
        {
            mx = ns[s];
            winner = s;
        }
    }


    cout << winner;

	return 0;
}
