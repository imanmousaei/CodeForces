/**

**/

// g++ -g -O2 -std=gnu++17 -static $file

#include <bits/stdc++.h>

#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define S second
#define F first
#define CP(x) cout<<"CP"<<x<<endl;
#define DPT for(int i=0;i<=n;i++){cout << "dp[" << i << "] = " << dp[i] << endl;}
#define DPT2 for(int i=0;i<=n;i++){for(int j=1;j<=n;j++){cout << "dp[" << i << "][" << j << "] = " << dp[i][j] << endl;}}

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

vi s1,s2,s3;
int n;

int main()
{
    cin >> n;

    for(int i=0;i<n;i++){
        int a;
        cin >> a;
        if(a==0){
            s3.pb(0);
        }
        else if(a<0){
            s1.pb(a);
        }
        else{
            s2.pb(a);
        }
    }


    int n1=s1.size();
    int n2=s2.size();
    int n3=s3.size();

    //printf("n2 = %d \n",n2);

    if(n1%2==0){
        s3.push_back(s1[n1-1]);
        s1.pop_back();
    }

    n1=s1.size();
    n2=s2.size();
    n3=s3.size();

    if(n2==0){
        s2.push_back(s1[n1-1]);
        s2.push_back(s1[n1-2]);
        s1.pop_back();
        s1.pop_back();
    }

    n1=s1.size();
    n2=s2.size();
    n3=s3.size();


    cout << n1 << " ";
    for(int b:s1){
        cout << b << " ";
    }

    cout << endl << n2 << " ";
    for(int b:s2){
        cout << b << " ";
    }

    cout << endl << n3 << " ";
    for(int b:s3){
        cout << b << " ";
    }

    cout << endl;




	return 0;
}