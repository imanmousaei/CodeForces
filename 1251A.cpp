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


int n;
string s;
set<char> ans;

int main()

{
    cin >> n;

    for(int i=0;i<n;i++){
        ans.clear();
        int cnt = 0,j=0;
        cin >> s;

        char last = s[0];
        int sz = s.size();
        
        if(s[1]!=s[0]){
            ans.insert(s[0]);
        }

        for(int j=0;j<sz-1;j++){
            last = s[j];
            cnt = 0;

            while(s[j+1]==last){
                cnt++;
                j++;
            }

            if(cnt%2==0){
                ans.insert(last);
            }


        }

        if(s[sz-1]!=s[sz-2]){
            ans.insert(s[sz-1]);
        }
        
        for(auto x:ans){
            cout << x;
        }

        cout << endl;
    }


	return 0;
}