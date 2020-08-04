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

const ll LLINF = 7e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

ll n,m,cnt;
int a[MAX];
deque <int> q[MAX],more;

int main()
{
    cin >> n >> m;

    int d = n/m;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        int r = a[i]%m;
        q[r].push_front(i);
    }

    int h = 10;
    while(h--){
    for(int i=0;i<m;i++)
    {
        while(q[i].size()>d)
        {
            int k = q[i].front();
            more.push_front(k);
            q[i].pop_front();
        }
        while(more.size()>0 && q[i].size()<d)
        {
            int k = more.front();
            q[i].push_front(k);
            more.pop_front();
            int r = a[k]%m;
            int tmp;
            if(i>=r)
            {
                tmp = i-r;
            }
            else
            {
                tmp = m - (r-i);
            }

            a[k] += tmp ;
            cnt+=tmp;

        }
    }}

    cout << cnt << endl;

    for(int i=1;i<=n;i++)
    {
        cout << a[i] << " ";
    }



	return 0;
}
