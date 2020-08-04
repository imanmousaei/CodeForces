/**
Programmer : Iman Mousaei

Accepted
**/

#include <bits/stdc++.h>
#include <deque>
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

const ll MAX = 100 + 7;
const ll MOD = 1e9 + 7;

int n,k,cnt;
deque<int> q;

int main()
{
    cin >> n >> k;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        q.push_back(a);
    }

    while(q.size()>0 && q.front()<=k)
    {
        cnt++;
        q.pop_front();
    }

    while(q.size()>0 && q.back()<=k)
    {
        cnt++;
        q.pop_back();
    }

    cout << cnt;

	return 0;
}
