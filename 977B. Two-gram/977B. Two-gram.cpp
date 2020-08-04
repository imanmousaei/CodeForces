/**
Programmer : Iman Mousaei

Accepted
**/

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
typedef vector<ll> vll;
typedef pair<int,int> pii;

const ll LLINF = 1e17 + 7;
const ll INF = 1e9 + 7;
const ll EPS = 1e-9 - 7;

const ll MAX = 1e9 + 7;
const ll MOD = 1e9 + 7;

ll n,mx;
string str,ans;
map<string,ll> cnt;

int main()
{
    cin >> n >> str;

    for(int i=0;i<n-1;i++)
    {
        string s = "";
        s+=str[i] ;
        s+=str[i+1];
        cnt[s]++;
        if(cnt[s]>mx)
        {
            ans = s;
            mx = cnt[s];
        }
    }


    cout << ans;

	return EXIT_SUCCESS;
}
