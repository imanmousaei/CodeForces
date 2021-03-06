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
#define CNTT for(int i=0;i<='z'-'a';i++){cout << "cnt[" << i << "] = " << cnt[i] << endl;}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 7e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 4e5 + 7;
const ll MOD = 1e9 + 7;

int n,k,rmv[100],cnt[100];
string s;

int main()
{
    cin >> n >> k >> s;

    for(int i=0;i<n;i++)
    {
        int c = s[i] - 'a';
        cnt[c]++;
    }

    for(int i=0;i<='z'-'a';i++)
    {
        while(cnt[i]>0 && k>0)
        {
            cnt[i]--;
            k--;
            rmv[i]++;
        }
    }

    //CNTT;
    for(int i=0;i<n;i++)
    {
        int c = s[i] - 'a';
        if(rmv[c]>0)
        {
            rmv[c]--;
        }
        else
        {
            cout << s[i];
        }
    }



	return 0;
}
