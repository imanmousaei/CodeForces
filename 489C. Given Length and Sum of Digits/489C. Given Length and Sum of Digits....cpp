/**
Programmer : Iman Mousaei

Accepted**/

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

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

int m,s;
string mn="",mx="";

int main()
{
    cin >> m >> s;

    if(9*m<s || (s==0 && m>1))
    {
        cout << "-1 -1";
        return 0;
    }

    if(m==1 && s==0)
    {
        cout << "0 0";
        return 0;
    }
    for(int i=0;i<m;i++)
    {
        mx += '0';
        mn += '9';
    }

    int sum = s;

    for(int i=0;i<m;i++)
    {
       for(int j=0;j<=9;j++)
       {
           if( (i>0 || j>0) && (sum>=j && sum-j<=(m-i-1)*9) )
           {
               //cout << "!";
               mn[i] = j + '0';
               sum -= j;
               break;
           }
       }

    }


    for(int i=0;i<m;i++)
    {
        if((i+1)*9<s)
        {
            mx[i] = '9';
        }
        else
        {
            mx[i] = (s - i*9) + '0' ;
            break;
        }
    }


    cout << mn << " " << mx;

	return 0;
}
