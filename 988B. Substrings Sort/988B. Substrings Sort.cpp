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

const ll MAX = 100 + 7;
const ll MOD = 1e9 + 7;

int n;
string s[MAX];

bool sub(string a,string b)
{
    int sz = a.size();

    for(int i=0;i<sz;i++)
    {
        for(int l=1;i+l<=sz;l++)
        {
            if(b==a.substr(i,l))
            {
                return true;
            }
        }
    }

    return false;

}

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }

    int t=2;
    while(t--){
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(s[i].size()>s[j].size())
            {
                swap(s[i],s[j]);
            }
        }
    }}

    for(int i=0;i<n-1;i++)
    {
        if(!sub(s[i+1],s[i]))
        {
            cout << "NO";
            //cout << i << " " << j << " ";
            return 0;
        }

    }


    cout << "YES" << endl;

    for(int i=0;i<n;i++)
    {
        cout << s[i] << endl;
    }



	return 0;
}
