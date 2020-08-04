/**
Programmer : Iman Mousaei

Khar kari

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

const ll MAX = 100 + 7;
const ll MOD = 1e9 + 7;

int t,dp[MAX],n=12;
bool s[17];

int main()
{

    memset(dp,0,sizeof dp);

    for(int i=1;i<=n;i++)
    {
        char c;
        cin >> c;
        if(c=='X')
        {
            s[i] = 1;
        }
        else
        {
            s[i] = 0;
        }
    }

    vector<string> ans;
    for(int a=1;a<=12;a++)
    {
        if(12%a)
        {
            continue;
        }

        int b = 12/a;
        bool valid = true;

        for(int i=1;i<=b;i++)
        {
            for(int x=i;x<=12;x+=b)
            {
                if(s[x]==0)
                {
                    valid = false;
                }
            }
        }

        if(valid)
        {
            string tmp = "";
            tmp += a + '0';
            tmp+='x';
            tmp += b + '0';

            cout << "# " << tmp << endl;

            ans.pb(tmp);
        }


    }

    cout << ans.size() << endl;
    for(auto k:ans)
    {
        cout << k << " ";
    }





	return 0;
}
