/**
Programmer : Iman Mousaei

dp[i] = Longest Consecutive Subsequence (LCS) up to i

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

const ll MAX = 2e5 + 7;
const ll MOD = 1e9 + 7;

int n,a[MAX],LCS,last;
map<int,int> dp;
set<int> s;

int main()
{
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }


    for(int i=0;i<n;i++)
    {
        dp[a[i]] = dp[a[i]-1]+1;

        if(LCS<dp[a[i]])
        {
            LCS = dp[a[i]];
            last = a[i];
        }

    }


    for(int i=n-1;i>=0;i--)
    {
        if(a[i]==last)
        {
            last--;
            s.insert(i+1);
        }

    }

    cout << LCS << endl;

    for(auto k:s)
    {
        cout << k << " ";
    }


	return EXIT_SUCCESS;
}
