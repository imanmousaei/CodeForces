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

const ll MAX = 100 + 7;
const ll MOD = 1e9 + 7;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }

int q,n,a[MAX];

int main()
{
    cin >> q;

    while(q--){

        bool fl = 1;

        cin >> n;

        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        sort(a,a+n);

        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]==1){
                fl = 0;
                cout << 2 << endl;
                break;
            }
        }

        if(fl){
            cout << 1 << endl;
        }


    }
	
	return 0;
}