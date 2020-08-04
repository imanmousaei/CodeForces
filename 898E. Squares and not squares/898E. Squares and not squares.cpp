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
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e18 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

int n,cntsq;
vi tosq,tonsq;

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin >> a;
        int sq = sqrt(a);
        if(sq * sq == a || a<=1)
        {
            cntsq++;

            if(a==0)
            {
                tonsq.pb(2);
            }
            else if(a==1)
            {
                tonsq.pb(1);
            }
            else
            {
                tonsq.pb(1);
            }

        }

        else
        {
            int d = min(a-sq*sq,(sq+1)*(sq+1)-a);
            tosq.pb(d);
        }

    }

    //cout << cntsq << " " << n/2 << endl;

    int dif = cntsq - n/2 ; // + if is sq is ziad , - if sq is kam
    int d = abs(dif);

    if(dif==0)
    {
        cout << 0;
        return 0;
    }

    sort(tosq.begin(),tosq.end());
    sort(tonsq.begin(),tonsq.end());

    ll ans = 0;
    if(dif>0)
    {
        for(int i=0;i<d;i++)
        {
            ans += tonsq[i];
        }

    }
    else
    {
        for(int i=0;i<d;i++)
        {
            ans += tosq[i];
        }
    }


    cout << ans;


	return 0;
}
