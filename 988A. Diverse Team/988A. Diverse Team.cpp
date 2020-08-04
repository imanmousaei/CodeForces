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
#define error(x) cerr << #x << " = " << (x) <<endl

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 7e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 200 + 7;
const ll MOD = 1e9 + 7;

int n,k,idx[MAX];
set<int> s,ans;

int main()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        int a;
        cin >> a;
        if(idx[a]==0)
            idx[a] = i;
        s.insert(a);
    }

    if(s.size()<k)
    {
        cout << "NO";
        return 0;
    }

    cout << "YES" << endl;

    int i=0;
    for(auto t:s)
    {
        if(i<k)
        {
            cout << idx[t] << " ";
            i++;
        }
    }




	return 0;
}
