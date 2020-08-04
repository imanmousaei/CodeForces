// g++ -g -O2 -std=gnu++17 -static $file

#include <bits/stdc++.h>

#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first

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
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int c[20],t;

int main()
{
    cin >> t;
    while(t--){
        bool f = 0;
        int mn=MAX,idx;
        for(int i=0;i<=9;i++){
            cin >> c[i];

            if(i==0){
                c[0]++;
            }

            if(c[i]<mn){
                mn = c[i];
                idx = i;
            }

            if(c[i]==0 && f==0){
                if(i==0){
                    cout << 10 << endl;
                }
                else{
                    cout << i << endl;
                }
                f = 1;
            }
        }

        if(f){
            continue;
        }

        if(idx==0){
            cout << 1;
            mn--;
        }
        mn++;
        while(mn--){
            cout << idx;
        }


        cout << endl;

    }



	return 0;
}