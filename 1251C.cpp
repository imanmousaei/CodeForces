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

int t;

int main()
{
    cin >> t;
    while(t--){
        string odd,even,s;
        bool f = 0;
        cin >> s;
        //cout << "here";
        int sz = s.size();
        for(char c:s){
            int num = c - '0';
            if(num%2==0){
                even += c;
            }
            else{
                odd += c;
            }
        }

        //cout << even[sz] << endl << even << endl << odd << endl;


        for(int i=0,j=0;i<odd.size() || j<even.size();){
            //cout << "here ";
            while(i>=odd.size() && j<even.size()){
                cout << even[j];
                j++;
                f = 1;
            }

            while(i<odd.size() && j>=even.size()){
                cout << odd[i];
                i++;
                f = 1;
            }

            if(f){
                break;
            }

            if(odd[i]<even[j]){
                cout << odd[i];
                i++;
            }
            else{
                cout << even[j];
                j++;
            }

        }

        cout << endl;

    }



	return 0;
}