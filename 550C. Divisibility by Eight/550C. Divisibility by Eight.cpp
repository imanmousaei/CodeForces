/**
Programmer : Iman Mousaei

dp[i][md] : true iff it's possible to remove some to get remainder md at %8

Wrong/Time Limit/Bug/Incomplete

**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout<<"CP"<<x<<endl;
#define S second
#define F first
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=0;j<8;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << "     par[" << i << "][" << j << "] = " << par[i][j].F << "  " << par[i][j].F << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 100 + 7;
const ll MOD = 1e9 + 7;

string s;
int n,m=8,cnt[15],a[5];

int main()
{
    cin >> s;

    n = s.size();

    for(int i=0;i<n;i++)
    {
        int num = s[i]-'0';
        if(num%m == 0)
        {
            cout << "YES" << endl << num << endl;
            return 0;
        }
        cnt[num]++;
    }

    for(int i=1;i<=9;i++)
    {
        if(cnt[i]==0)
        {
            continue;
        }
        else
        {
            cnt[i]--;
        }

        for(int j=1;j<=9;j++)
        {
            if(cnt[j]==0)
            {
                continue;
            }
            else
            {
                cnt[j]--;
            }

            for(int k=1;k<=9;k++)
            {
                if(cnt[k]==0)
                {
                    continue;
                }

                int num = i*100 + j*10 + k;

                if(num%8==0)
                {
                    cout << "YES" << endl << num << endl;
                    return 0;
                }

            }

            cnt[j]++;
        }

        cnt[i]++;
    }

    cout << "NO";

	return 0;
}
