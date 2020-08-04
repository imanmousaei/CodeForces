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

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

bool purple,green,blue,orange,red,yellow;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;

        if(s=="purple")
            purple = true;
        if(s=="green")
            green = true;
        if(s=="blue")
            blue = true;
        if(s=="orange")
            orange = true;
        if(s=="red")
            red = true;
        if(s=="yellow")
            yellow = true;

    }

    cout << 6-n << endl;

    if(!purple)
    {
        cout << "Power" << endl;
    }
    if(!green)
    {
        cout << "Time" << endl;
    }
    if(!blue)
    {
        cout << "Space" << endl;
    }
    if(!orange)
    {
        cout << "Soul" << endl;
    }
    if(!red)
    {
        cout << "Reality" << endl;
    }
    if(!yellow)
    {
        cout << "Mind" << endl;
    }



	return 0;
}
