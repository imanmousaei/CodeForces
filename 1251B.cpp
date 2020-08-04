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
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int q;

int main()
{
    cin >> q;
    while(q--){
        int cnt1=0,cnt0=0,o=0,e=0;
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            string s;
            cin >> s;
            int sz = s.size();
            if(sz%2==0){
                e++;
            }
            else{
                o++;
            }


            for(int j=0;j<sz;j++)
            {
                if(s[j]=='1'){
                    cnt1++;
                }
                else{
                    cnt0++;
                }
            }

        }

        if(cnt0%2==1 && cnt1%2==1){
            if(o>0){
                cout << n << endl;
            }
            else{
                cout << n-1 << endl;
            }

        }
        else{
            cout << n << endl;
        }



    }



	return 0;
}