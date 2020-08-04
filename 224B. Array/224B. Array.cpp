/**
Programmer : Iman Mousaei

dp[i] = number of distinct numbers in range [ a[1],a[i] ]

Accepted
**/

#include <bits/stdc++.h>
#define iOS ios_base::sync_with_stdio(false);
#define pb push_back
#define ALL(x) (x).begin(), (x).end()
#define CLR(x, a) memset(x, a, sizeof x)
#define CP(x) cout << "CP" << x << endl;
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

const ll MAX = 1e5 + 7;
const ll MOD = 1e9 + 7;

int n,k,a[MAX],cnt[MAX],dp[MAX],b,e;
bool first[MAX]; // first[i] true iff i is the first appearance of a[i]
bool mark[MAX]; // first[i] true iff there is another appearance of a[i] in our range(h)
set<int> s;
vi h;

int main()
{
    cin >> n >> k;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        int sz = s.size();
        s.insert(a[i]);
        int sz2 = s.size();
        if(sz!=sz2)
        {
            first[i] = true;
        }

    }

    if(s.size()<k)
    {
        cout << "-1 -1";
        return 0;
    }
    if(k==1)
    {
        cout << "1 1";
        return 0;
    }

    b = 1;
    dp[0] = 0;
    for(int i=1;i<=n;i++)
    {
        if(first[i])
        {
            dp[i] = dp[i-1] + 1;
        }
        else
        {
            dp[i] = dp[i-1];
        }

        cnt[a[i]]++;
        if(dp[i]==k)
        {
            e = i;
            break;
        }
    }

    //cout << b << " " << e << endl;


    while(cnt[a[b]]>1)
    {
        //cout << "!" << b << " " << a[b] << " " << cnt[a[b]] << endl;
        cnt[a[b]]--;
        b++;
    }
    while(cnt[a[e]]>1)
    {
        //cout << "!" << e << " " << a[e] << " " << cnt[a[e]] << endl;
        cnt[a[e]]--;
        e--;
    }


    cout << b << " " << e << endl;

	return 0;
}
