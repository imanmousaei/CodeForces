/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout<<"CP"<<x<<endl;
#define S second
#define F first
#define DPT for(int i=1;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=1;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

string s;
int n;

int AB(int b=0)
{
    for(int i=b;i<n-1;i++)
    {
        if(s[i]=='A' && s[i+1]=='B')
        {
            return i+1;
        }
    }
    return 0;
}

int BA(int b=0)
{
    for(int i=b;i<n-1;i++)
    {
        if(s[i]=='B' && s[i+1]=='A')
        {
            return i+1;
        }
    }
    return 0;
}

int main()
{
    cin >> s;

    n = s.size();

    int b = AB();

    //cout << b << " " << BA(b+1) << endl;
    if(BA(b+1) && b)
    {
        cout << "YES";
        return 0;
    }

    b = BA();

    //cout << b << " " << AB(b+1) << endl;

    if(AB(b+1) && b)
    {
        cout << "YES";
        return 0;
    }


    cout << "NO";


	return 0;
}
