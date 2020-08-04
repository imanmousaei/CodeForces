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
#define error(x) cerr << "# " << #x << " = " << (x) << endl
#define error(x,y) cerr << "# " << (x) << " " << (y) << endl

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e3 + 7;
const ll MOD = 1e9 + 7;

int n,sher,mor;
string sh,mr;
bool used[MAX];

int main()
{
    cin >> n >> sh >> mr;

    sort(mr.begin(),mr.end());

    //error(sh,mr);

    for(int i=0;i<n;i++)
    {
        bool flag = false;
        for(int j=0;j<n;j++)
        {
            if(used[j])
                continue;

            if(mr[j]>=sh[i])
            {
                //error(i,j);
                flag = true;
                used[j] = true;
                break;
            }
        }
        if(!flag)
        {
            mor++;
            for(int t=0;t<n;t++)
            {
                if(!used[t])
                {
                    //error(i,t);
                    used[t] = true;
                    break;
                }
            }
        }
    }

    cout << mor << endl;

    memset(used,0,sizeof used);

    for(int i=0;i<n;i++)
    {
        bool flag = false;
        for(int j=0;j<n;j++)
        {
            if(used[j])
                continue;

            if(mr[j]>sh[i])
            {
                sher++;
                //error(i,j);
                flag = true;
                used[j] = true;
                break;
            }
        }
        if(!flag)
        {
            for(int t=0;t<n;t++)
            {
                if(!used[t])
                {
                    used[t] = true;
                    //error(i,t);
                    break;
                }
            }
        }
    }

    cout << sher;


	return 0;
}
