/**
Programmer : Iman Mousaei

Wrong/Time Limit/Bug/Incomplete

**/

// g++ -g -O2 -std=gnu++17 -static $file

#include <bits/stdc++.h>

#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first
// memset (arr,0,sizeof(num));

using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector< vector<int> > vvi;
typedef vector< pii > vpii;
typedef vector<ll> vll;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9;
const ll EPS = 1e-9 - 7;

const ll MAX = 2e5 + 7;
const ll MAXL = 1e6 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int ans,cnt,t,n,k,d,a[MAX],ct[MAXL];

int main()
{
    cin >> t;
    while(t--){
        cin >> n >> k >> d;

        cnt = 0;
        memset (ct,0,sizeof(ct));
        memset (a,0,sizeof(a));

        for(int i=1;i<=n;i++){
            cin >> a[i];
            if(i<=d){
                if(ct[a[i]]==0){
                    cnt++;
                }
                ct[a[i]]++;
                
                //printf("i = %d , cnt = %d\n",i,cnt);
            }
        }

        ans = cnt;

        for(int i=d+1;i<=n;i++){

            if(a[i]==a[i-d]){
                continue;
            }

            ct[a[i]]++;
            ct[a[i-d]]--;

            if(ct[a[i]]==1){
                cnt++;
            }

            if(ct[a[i-d]]==0){
                cnt--;
            }


            //printf("i = %d , cnt = %d\n",i,cnt);

            ans = min(ans,cnt);

        }



        cout << ans << endl;


    }



	return 0;
}